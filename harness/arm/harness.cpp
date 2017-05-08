#include "Descriptor.h"

#include <cassert>
#include <random>
#include <iomanip>
#include <sstream>

#include <sys/mman.h>

extern "C" void test_fn();
extern "C" uint32_t test_slot;

struct register_state {
	uint32_t gprs[13];
	uint32_t CPSR;
};

struct result_state {
	struct register_state input, output;
};

extern struct register_state input_state, output_state;

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
	unprotect_page((void*)&test_slot);
	unprotect_page((void*)&input_state);
	unprotect_page((void*)&output_state);
}

void HarnessPrepareTest(const Descriptor &test)
{
	// ARM only supports 4 byte instructions (need a different harness for thumb/thumb2)
	if(test.GetSize() != 4) {
		fprintf(stderr, "Error! Test instruction size is %u (should be 4)\n", test.GetSize());
		assert(false);
	}
	
	
	test.CopyTo((uint8_t*)&test_slot);
	__builtin___clear_cache((void*)test_slot, (void*)(((uint8_t*)&test_slot)+4));
		
}

void HarnessRunTest(const Descriptor &test, Descriptor *&results)
{
	random_engine_t random;
	
	RandomizeInputState();
	
	test_fn();
	
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
