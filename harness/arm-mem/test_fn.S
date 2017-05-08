.text
.syntax unified
.fpu neon

.arm
.globl test_fn
test_fn:
	push {r0-r12, lr}
	ldr r0, input_cpsr
	msr CPSR_fs, r0
	
	ldr r9, =input_state
	ldm r9!, {r0-r7}
	vldm r9!, {d0-d15}
	vldm r9!, {d16-d31}
	
	bl test_slot
	
	str r0, output_state
	
	mrs r0, CPSR
	str r0, output_cpsr

	ldr r0, =output_state+4
	stm r0!, {r1-r7}
	
	vstm r0!, {d0-d15}
	vstm r0!, {d16-d31}
	
	pop {r0-r12, pc}

.globl test_slot
test_slot:
	nop
	bx lr

.ltorg

.globl input_state
input_state:
	.space 4*8
	.space 8*32
input_cpsr:
	.space 4

.globl output_state	
output_state:
	.space 4*8
	.space 8*32
output_cpsr:
	.space 4



.data
.arm
.globl harness_nop
harness_nop:
	nop
