#include "Descriptor.h"

#include <cassert>
#include <random>
#include <iomanip>
#include <sstream>
#include <map>

#include <sys/mman.h>

extern "C" uint32_t test_fn_preamble_size, test_fn_postamble_size;
extern void *test_fn_preamble, *test_fn_postamble;

struct register_state {
	uint32_t CPSR;
	uint32_t gprs[13];
};

struct result_state {
	struct register_state input, output;
};

struct register_state input_state, output_state;

typedef std::mt19937 random_engine_t;
random_engine_t random_engine;

void RandomizeInputState()
{
	for(auto &i : input_state.gprs) {
		i = random_engine();
	}
	
	input_state.CPSR = (random_engine() & 0xf) << 28;
}

void unprotect_page(void *addr)
{
	uint32_t prot_page = (uint32_t)addr;
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
	
	char *preamble = (char*)&test_fn_preamble;
	for(auto i = 0; i < test_fn_preamble_size; ++i) {
		tf->storage.at(i) = preamble[i];
	}
	
	char *postamble = (char*)&test_fn_postamble;
	for(auto i = 0; i < test_fn_postamble_size; ++i) {
		tf->storage.at(i + test_fn_preamble_size + size) = postamble[i];
	}
	
	__builtin___clear_cache((void*)tf->function, (void*)((char*)tf->function + total_size));
	
	tf->test_slot = (void*)((char*)tf->function + test_fn_preamble_size);
	
	test_fn_locations[size] = tf;
}

void HarnessPrepareTest(const Descriptor &test)
{
	if(!test_fn_locations.count(test.GetSize())) {
		GenerateTestFunction(test.GetSize());
	}
	
	TestFunction *fn = test_fn_locations.at(test.GetSize());
	test.CopyTo((uint8_t*)fn->test_slot);
	__builtin___clear_cache((void*)fn->test_slot, (void*)(((uint8_t*)fn->test_slot)+test.GetSize()));	
}

void HarnessRunTest(const Descriptor &test, Descriptor *&results)
{
	random_engine_t random;
	
	RandomizeInputState();
	
	test_fn_locations.at(test.GetSize())->function(&input_state, &output_state);
	
	struct result_state result_struct;
	result_struct.input = input_state;
	result_struct.output = output_state;
	
	results = new Descriptor(sizeof(result_struct), (uint8_t*)&result_struct);
}

void HarnessShutdown()
{
	
}

std::string HarnessFormatResult(const Descriptor &test, const Descriptor &result)
{
	struct result_state data;
	uint32_t test_insn;
	result.CopyTo((uint8_t*)&data);
	
	test.CopyTo((uint8_t*)&test_insn);
	
	std::stringstream str;
	
	str << "Test " << std::hex << std::setw(8) << std::setfill('0') << test_insn << std::endl;
	
	for(int i = 0; i < 13; ++i) {
		str << std::dec << i << " " << std::hex << std::setw(8) << std::setfill('0') << data.input.gprs[i] << " -> " << std::hex << std::setw(8) << std::setfill('0') << data.output.gprs[i] << std::endl;
	}
	
	data.input.CPSR &= ~(1 << 8);
	data.output.CPSR &= ~(1 << 8);
	if(data.input.CPSR != data.output.CPSR)
		str << std::hex << std::setw(8) << std::setfill('0') << data.input.CPSR << " -> " << std::hex << std::setw(8) << std::setfill('0') << data.output.CPSR << std::endl;
	str << std::endl;
	
	return str.str();
}
