#include "Descriptor.h"

#include <cassert>
#include <random>
#include <iomanip>
#include <sstream>

#include <sys/mman.h>

extern "C" void test_fn();
extern "C" uint32_t test_slot;

/*

GPRS: r0-r7
DPRS: d0-d31

*/

struct register_state {
	uint32_t gprs[8];
	double dprs[16];
	uint32_t CPSR;
} __attribute__((packed));

struct result_state {
	struct register_state input, output;
} __attribute__((packed));

extern struct register_state input_state, output_state;

typedef std::mt19937 random_engine_t;
random_engine_t random_engine;

char data_orig[1024];
char data_test[1024];

void RandomizeInputState()
{
	fprintf(stderr, "Randomizing state\n");
	for(int i = 0; i < sizeof(data_orig); ++i) {
		data_orig[i] = random_engine();
	}
	memcpy(data_test, data_orig, sizeof(data_orig));
	
	for(int i = 0; i < 4; ++i) input_state.gprs[i] = (uint32_t)(data_test + (sizeof(data_orig)/2));
	for(int i = 4; i < 8; ++i) input_state.gprs[i] = (random_engine() & ~0x3) % (sizeof(data_orig)/4);
	for(int i = 0; i < 16; ++i) input_state.dprs[i] = random_engine() / (double)random_engine();
	
	input_state.CPSR = (random_engine() & 0xf) << 28;
}

template<typename T> void unprotect_page(T *addr)
{
	uint32_t prot_page = (uint32_t)addr;
	prot_page &= ~0xfff;
	
	//printf("MPROTECTing %x %x\n", test_fn_addr, 0x1000);
	
	mprotect((void*)prot_page, 0x1000, PROT_READ | PROT_WRITE | PROT_EXEC);	
	
	size_t uaddr = (size_t)addr;
	uint32_t end_page = uaddr + sizeof(*addr);
	end_page &= ~0xfff;
	if(end_page != prot_page)
		mprotect((void*)end_page, 0x1000, PROT_READ | PROT_WRITE | PROT_EXEC);	
}

void HarnessInitialize()
{
	unprotect_page(&test_slot);
	unprotect_page(&input_state);
	unprotect_page(&output_state);
}

extern uint16_t harness_nop1;
void HarnessRunTest(const Descriptor &test, Descriptor *&results)
{
	random_engine_t random;
	uint32_t test_instruction_ptr = ((uint32_t)&test_slot) & ~1;	
	
	test.CopyTo((uint8_t*)test_instruction_ptr);
	
	// If the test instruction is only two bytes, insert a nop after it
	if(test.GetSize() == 2) {
		((uint16_t*)test_instruction_ptr)[1] = harness_nop1;
	}
	
	__builtin___clear_cache((void*)test_instruction_ptr, (void*)(test_instruction_ptr + 4));
	
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

	if (test.GetSize() == 4)
	{
		uint32_t lo_to_hi = (test_insn & 0xffff) << 16;
		uint32_t hi_to_lo = (test_insn & 0xffff0000) >> 16;
	
		test_insn = lo_to_hi | hi_to_lo;
	}

	std::stringstream str;
	
	if(test.GetSize() == 4)
		str << "Test " << std::hex << std::setw(8) << std::setfill('0') << test_insn << std::endl;
	else 
		str << "Test " << std::hex << std::setw(4) << std::setfill('0') << (uint16_t)test_insn << std::endl;
	
	for(int i = 0; i < 8; ++i) {
		str << std::dec << i << " " << std::hex << std::setw(8) << std::setfill('0') << data.input.gprs[i] << " -> " << data.output.gprs[i] << std::endl;
	}
	for(int i = 0; i < 16; ++i) {
		str << std::dec << i << " " << std::hex << std::setw(8) << std::setfill('0') << data.input.dprs[i] << " -> " << data.output.dprs[i] << std::endl;
	}
	for(int i = 0; i < sizeof(data_orig); ++i) {
		if(data_orig[i] != data_test[i]) str << std::hex << i << " " << (uint32_t)data_orig[i] << " -> " << (uint32_t)data_test[i] << std::endl;
	}
	

	uint32_t input_cpsr = data.input.CPSR & ~(1 << 8);
	uint32_t output_cpsr = data.output.CPSR & ~(1 << 8);
	
    str << std::hex << std::setw(8) << std::setfill('0') << input_cpsr  << " -> " << std::hex << std::setw(8) << std::setfill('0') << (output_cpsr) << std::endl;
	str << std::endl;
	
	return str.str();
}
