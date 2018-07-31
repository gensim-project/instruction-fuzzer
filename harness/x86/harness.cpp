#include "Descriptor.h"

#include <iostream>
#include <cassert>
#include <random>
#include <iomanip>
#include <sstream>
#include <map>

#include <sys/mman.h>

extern "C" uint32_t test_fn_preamble_size, test_fn_postamble_size;
extern void *test_fn_preamble, *test_fn_postamble;

struct register_state {
	uint64_t flags;
	uint64_t gprs[16];
	
	uint8_t xmm_file[256];
} __attribute__((packed));

struct result_state {
	struct register_state input, output;
};

struct register_state input_state, output_state;

typedef std::mt19937 random_engine_t;
random_engine_t random_engine;

void RandomizeInputState(int context_id)
{
	for(int i = 0; i < 16; ++i) {
		input_state.gprs[i] = random_engine();
	}
	for(int i = 0; i < sizeof(input_state.xmm_file)/4; ++i) {
		((uint32_t*)input_state.xmm_file)[i] = random_engine();
	}
	
	switch(context_id) {
		case 1: // BDIV
			// AX / source needs to be smaller than 0x100
			for(int i = 1; i < 16; ++i) { input_state.gprs[i] = random_engine() & 0xff; }
			input_state.gprs[0] = random_engine() & 0xff;
			
			
			break;
		case 2: // WDIV
		{
			// EAX / source needs to be smaller than 0x100
			uint32_t dividend = random_engine() & 0xffff;
			
			for(int i = 1; i < 16; ++i) { input_state.gprs[i] = random_engine() & 0xffff; }
			
			input_state.gprs[0] = dividend & 0xffff;
			input_state.gprs[2] = dividend >> 16;
			
			break;
		}
		case 3: // DDIV
		{
			// EAX / source needs to be smaller than 0x100
			uint64_t dividend = random_engine() & 0xffffffff;
			
			for(int i = 1; i < 16; ++i) { input_state.gprs[i] = random_engine() & 0xffffffff; }
			
			input_state.gprs[0] = dividend & 0xffffffff;
			input_state.gprs[2] = dividend >> 32;
			
			break;
		}
		case 4: // QDIV
			input_state.gprs[2] = 0;
			break;
	}
	
	input_state.flags = 0;
}

void unprotect_page(void *addr)
{
	uint64_t prot_page = (uint64_t)addr;
	prot_page &= ~0xfff;
	
	//printf("MPROTECTing %x %x\n", test_fn_addr, 0x1000);
	
	mprotect((void*)prot_page, 0x1000, PROT_READ | PROT_WRITE | PROT_EXEC);	
}

void HarnessInitialize()
{
	unprotect_page((void*)&input_state);
	unprotect_page((void*)&output_state);
}

typedef void (*function_t)(struct register_state *in, struct register_state *out);
class TestFunction {
public:
	std::vector<unsigned char> storage;
	function_t function;
	void *test_slot;
};
std::map<size_t, TestFunction*> test_fn_locations;

static void GenerateTestFunction(size_t size)
{
	assert(test_fn_locations.count(size) == 0);
	
	TestFunction *tf = new TestFunction();
	
	size_t total_size = size + test_fn_preamble_size + test_fn_postamble_size;
	tf->storage.resize(total_size);
	tf->function = (function_t)tf->storage.data();
	
	uint32_t output_ptr = 0;
	
	char *preamble = (char*)&test_fn_preamble;
	for(auto i = 0; i < test_fn_preamble_size; ++i) {
		tf->storage.at(output_ptr++) = preamble[i];
	}
	
	output_ptr += size;
	
	char *postamble = (char*)&test_fn_postamble;
	for(auto i = 0; i < test_fn_postamble_size; ++i) {
		tf->storage.at(output_ptr++) = postamble[i];
	}
	
	tf->test_slot = (void*)((char*)tf->function + test_fn_preamble_size);
	
	test_fn_locations[size] = tf;
	
	std::cout << "Test function for size " << size << " created at 0x" << std::hex << (uint64_t)(void*)tf->function << " (0x" << std::hex << tf->test_slot << ")" << std::endl;
}

void HarnessPrepareTest(const Descriptor &test)
{
	if(!test_fn_locations.count(test.GetSize())) {
		GenerateTestFunction(test.GetSize());
	}
	
	TestFunction *fn = test_fn_locations.at(test.GetSize());
	test.CopyTo((uint8_t*)fn->test_slot);
	
	// total size of fn is preamble + test size + postamble
	uint32_t size = test_fn_preamble_size + test.GetSize() + test_fn_postamble_size;
	
	for(char *ptr = (char*)fn->function; ptr <= (char*)fn->function + size; ptr += 64) {
		asm volatile ("clflush %0" : : "m"(*ptr));
	}
}

void HarnessRunTest(const Descriptor &test, Descriptor *&results)
{
	random_engine_t random;
	
	RandomizeInputState(test.GetContext());
	
	auto fn = test_fn_locations.at(test.GetSize())->function;
	fn(&input_state, &output_state);
	
	struct result_state result_struct;
	result_struct.input = input_state;
	result_struct.output = output_state;
	
	results = new Descriptor(sizeof(result_struct), (uint8_t*)&result_struct, test.GetContext());
}

void HarnessShutdown()
{
	
}

uint32_t bc_float(float f)
{
	union {float a; uint32_t b; };
	a = f;
	return b;
}

std::string HarnessFormatResult(const Descriptor &test, const Descriptor &result)
{
	struct result_state data;
	std::vector<unsigned char> test_insn (test.GetSize());
	result.CopyTo((uint8_t*)&data);
	
	test.CopyTo((uint8_t*)test_insn.data());
	
	std::stringstream str;
	
	str << "Test ";
	for(int i = 0; i < test.GetSize(); ++i) {
		str << std::hex << std::setw(2) << std::setfill('0') << (uint32_t)test_insn.at(i);
	}
	str << std::endl;
	
	for(int i = 0; i < 16; ++i) {
		if(i == 4) { // SP
			continue;
		}
		if(data.input.gprs[i] != data.output.gprs[i]) {
			str << "G" << std::dec << i << " " << std::hex << std::setw(16) << std::setfill('0') << data.input.gprs[i] << " != " << std::hex << std::setw(16) << std::setfill('0') << data.output.gprs[i] << std::endl;
		} else {
			str << "G" << std::dec << i << " " << std::hex << std::setw(16) << std::setfill('0') << data.input.gprs[i] << " == " << std::hex << std::setw(16) << std::setfill('0') << data.output.gprs[i] << std::endl;
		}
	}
	for(int i = 0; i < 16; ++i) {
		auto input_xmm = data.input.xmm_file + (i * 16);
		auto output_xmm = data.output.xmm_file + (i * 16);
		if(memcmp(input_xmm, output_xmm, 16)) {
			str << "X" << std::dec << i << " ";
			for(int j = 15; j >= 0; --j) {
				str << std::hex << std::setfill('0') << std::setw(2) << (uint32_t)input_xmm[j];
			}
			str << " != ";
			for(int j = 15; j >= 0; --j) {
				str << std::hex << std::setfill('0') << std::setw(2) << (uint32_t)output_xmm[j];
			}
			str << std::endl;
		}
	}
	
	if(data.input.flags != data.output.flags) {
		str << "EFLAGS: " << std::hex << std::setw(8) << std::setfill('0') << data.input.flags << " -> " << std::hex << std::setw(8) << std::setfill('0') << data.output.flags << std::endl;
	}
	
	str << std::endl;
	return str.str();
}
