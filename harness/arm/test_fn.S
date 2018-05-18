.arm
.fpu neon
.text

// input context:
// uint32 cpsr
// uint32 gprs[13]
// uint32 fpcsr
// uint32 S[64]

#define FPSCR_MASK 0xf1c00000

// Set up the input context (pointer in r0) and store the output 
// context pointer (r1)
.globl test_fn_preamble
test_fn_preamble:
	push {r0-r12, r14}

	// back up cpsr
	mrs r2, CPSR
	push {r2}
	vmrs r2, fpscr
	push {r2}

	push {r1}
	
	// Load CPSR
	ldr r1, [r0]
	msr CPSR_f, r1
	
	ldr r3, =fpscr_mask
	
	// Load FPCSR
	ldr r1, [r0, #(4*14)]
	and r1, r3
	
	vmrs r2, fpscr
	neg r3, r3
	and r2, r3
	
	orr r1, r1, r2
	vmsr fpscr, r1
	
	// Load FPRegs
	add r1, r0, #(4 * 15)
	vldm r1!, {d0-d15}
	vldm r1!, {d16-d31}
	
	// Load GRegs
	add r0, #4
	ldm r0, {r0-r12}
	
	adr r14, 1f
	bx r14
fpscr_mask:
.word FPSCR_MASK
1:

.globl test_fn_preamble_end
test_fn_preamble_end:

// Store back the test results and return
.globl test_fn_postamble
test_fn_postamble:
	adr r14, 1f
	bx r14
1:

	push {r14}
	// load back the output context pointer off the stack
	ldr r14, [sp,#4]
	
	// Store GRegs
	add r14, #4
	stm r14, {r0-r12}
	
	// Store CPSR
	sub r14, #4
	mrs r0, CPSR
	str r0, [r14]
	
	// Store FPSCR
	vmrs r0, FPSCR
	str r0, [r14, #(4*14)]
	
	// Store FPRegs
	add r14, #(4*15)
	vstm r14!, {d0-d15}
	vstm r14, {d16-d31}
	
	pop {r14}
	
	pop {r1}
	
	pop {r1}
	vmsr fpscr, r1
	pop {r1}
	msr cpsr, r1
	
	pop {r0-r12, r14}
	
	bx lr

.globl test_fn_postamble_end
test_fn_postamble_end:

.data

.globl test_fn_preamble_size
test_fn_preamble_size:
.word test_fn_preamble_end - test_fn_preamble

.globl test_fn_postamble_size
test_fn_postamble_size:
.word test_fn_postamble_end - test_fn_postamble	

