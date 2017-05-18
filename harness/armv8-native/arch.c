#include <stdint-gcc.h>

void arch_init()
{
	// Enable ASIMD unit
	// modify cpacr.fpen
	uint32_t fpen = (1 << 20) | (1 << 21);
	asm volatile ("msr CPACR_EL1, %0" :: "r"(fpen));
	
	uint32_t sctlr;
	asm volatile ("mrs %0, SCTLR_EL1" : "=r"(sctlr));
	// disable SP alignment checks
	sctlr &= ~((1 << 4) | (1 << 3));
	// enable IVAU at EL0
	sctlr |= (1 << 26);
	
	// enable caches
	sctlr |= (1 << 12); // I
	sctlr |= (1 << 2);  // C
	
	asm volatile("msr SCTLR_EL1, %0" :: "r"(sctlr));
	
	// enable CNTPCT for coprocessor
	uint32_t cntkctl;
	asm volatile ("mrs %0, CNTKCTL_EL1" : "=r"(cntkctl));
	cntkctl |= (1 << 0);
	asm volatile ("msr CNTKCTL_EL1, %0" :: "r"(cntkctl));
	
	//armv8_heap_init();
}

void arch_abort()
{
//	fprintf(OUTPUT, "armv8: abort!\n");
	while(1) ;
}
