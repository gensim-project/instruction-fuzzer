.arm
.text

// input context:
// uint32 cpsr
// uint32 gprs[13]

// Set up the input context (pointer in r0) and store the output 
// context pointer (r1)
.globl test_fn_preamble
test_fn_preamble:
	push {r0-r12}
	push {r1}
	ldr r1, [r0]
	msr CPSR_f, r1
	
	add r0, #4
	ldm r0, {r0-r12}

.globl test_fn_preamble_end
test_fn_preamble_end:

// Store back the test results and return
.globl test_fn_postamble
test_fn_postamble:
	push {r14}
	// load back the output context pointer off the stack
	ldr r14, [sp,#4]
	add r14, #4
	stm r14, {r0-r12}
	
	sub r14, #4
	mrs r0, CPSR
	str r0, [r14]
	
	pop {r14}
	pop {r1}
	pop {r0-r12}
	
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

