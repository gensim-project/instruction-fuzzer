.arm

.globl test_fn
test_fn:
	push {r0-r12}
	ldr r0, input_cpsr
	msr CPSR_f, r0
	
	adr r0, input_state
	ldm r0, {r0-r12}
	
.globl test_slot
test_slot:
	nop
	
	str r0, output_state
	
	mrs r0, CPSR
	str r0, output_cpsr

	adr r0, output_state+4
	stm r0, {r1-r12}
	
	pop {r0-r12}
	bx lr


.globl input_state
input_state:
	.space 4*13
input_cpsr:
	.space 4

.globl output_state	
output_state:
	.space 4*13
output_cpsr:
	.space 4
