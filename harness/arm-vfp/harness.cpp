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
	union {
		float sprs[64];
		double dprs[32];
	};
	uint32_t CPSR;
	uint32_t FPSCR;
} __attribute__((packed));

struct result_state {
	struct register_state input, output;
} __attribute__((packed));

extern struct register_state input_state, output_state;

typedef std::mt19937 random_engine_t;
random_engine_t random_engine;

void RandomizeInputState()
{
	for(int i = 0; i < 8; ++i) input_state.gprs[i] = random_engine();
	for(int i = 0; i < 32; ++i) input_state.sprs[i] = (10000*random_engine()) / (10000*(double)random_engine());
	for(int i = 16; i < 32; ++i) input_state.dprs[i] = (10000*random_engine()) / (10000*(double)random_engine());
	
	input_state.CPSR = (random_engine() & 0xf) << 28;
	input_state.FPSCR = (random_engine() & 0xf) << 28;
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

void HarnessPrepareTest(const Descriptor &test)
{
	uint32_t test_instruction_ptr = ((uint32_t)&test_slot) & ~1;	
	
	test.CopyTo((uint8_t*)test_instruction_ptr);
	
	__builtin___clear_cache((void*)test_instruction_ptr, (void*)(test_instruction_ptr + 4));	
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

uint32_t bc_float(float f)
{
	union {float a; uint32_t b; };
	a = f;
	return b;
}

uint64_t bc_double(double f)
{
	union {double a; uint64_t b; };
	a = f;
	return b;
}

std::string HarnessFormatResult(const Descriptor &test, const Descriptor &result)
{
	struct result_state data;
	uint32_t test_insn;
	result.CopyTo((uint8_t*)&data);
	
	test.CopyTo((uint8_t*)&test_insn);

	std::stringstream str;
	
	str << "Test " << std::hex << std::setw(8) << std::setfill('0') << test_insn << std::endl;
	
	for(int i = 0; i < 8; ++i) {
		str << std::dec << i << " " << std::hex << std::setw(8) << std::setfill('0') << data.input.gprs[i] << " -> " << data.output.gprs[i] << std::endl;
	}
	for(int i = 0; i < 64; ++i) {
		str << std::dec << i << " " << std::hex << std::setw(8) << std::setfill('0') << bc_float(data.input.sprs[i]) << " -> " << bc_float(data.output.sprs[i]) << std::endl;
	}
	for(int i = 0; i < 32; ++i) {
		str << std::dec << i << " " << std::hex << std::setw(8) << std::setfill('0') << data.input.dprs[i] << " -> " << data.output.dprs[i] << std::endl;
	}

	uint32_t input_cpsr = data.input.CPSR & ~(1 << 8);
	uint32_t output_cpsr = data.output.CPSR & ~(1 << 8);
	
    str << "CPSR " << std::hex << std::setw(8) << std::setfill('0') << input_cpsr  << " -> " << std::hex << std::setw(8) << std::setfill('0') << (output_cpsr) << std::endl;
    
	uint32_t input_fpscr = data.input.FPSCR & 0xf0000000;
	uint32_t output_fpscr = data.output.FPSCR & 0xf0000000;
	
    str << "FPSCR " << std::hex << std::setw(8) << std::setfill('0') << input_fpscr  << " -> " << std::hex << std::setw(8) << std::setfill('0') << (output_fpscr) << std::endl;
    
	str << std::endl;
	
	return str.str();
}
