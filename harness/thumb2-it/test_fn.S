.text
.syntax unified

.arm
.globl test_fn
test_fn:
	push {r0-r12, lr}
	ldr r0, input_cpsr
	msr CPSR_f, r0
	
	ldr r0, =input_state
	ldm r0, {r0-r12}
	
	blx test_the_insn
	
	str r0, output_state
	
	mrs r0, CPSR
	str r0, output_cpsr

	ldr r0, =output_state+4
	stm r0, {r1-r12}
	
	pop {r0-r12, pc}
	
.thumb
.globl test_slot
.thumb_func
test_the_insn:
	it eq
test_slot:
	nop.w
	bx lr

.ltorg

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



.data
.thumb
.globl harness_nop1
harness_nop1:
	nop
	
.globl harness_nop2
harness_nop2:
	nop.w
