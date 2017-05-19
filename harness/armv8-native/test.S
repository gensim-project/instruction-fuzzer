.data

.globl execute_test
execute_test:
	// backup callee save regs
	stp x19, x20, [sp, #-16]! // 16 callee
	stp x21, x22, [sp, #-16]! // 32 callee 
	stp x23, x24, [sp, #-16]! // 48 callee
	stp x25, x26, [sp, #-16]! // 64 callee
	stp x27, x28, [sp, #-16]! // 80 callee
	stp x29, x30, [sp, #-16]! // 96 callee
	
	stp x0, x1, [sp, #-16]! // 112 &input &output
	// load input state
	ldp x2, x3, [x0, 16 * 1]
	ldp x4, x5, [x0, 16 * 2]
	ldp x6, x7, [x0, 16 * 3]
	ldp x8, x9, [x0, 16 * 4]
	ldp x10, x11, [x0, 16 * 5]
	ldp x12, x13, [x0, 16 * 6]
	ldp x14, x15, [x0, 16 * 7]
	ldp x16, x17, [x0, 16 * 8]
	ldp x18, x19, [x0, 16 * 9]
	ldp x20, x21, [x0, 16 * 10]
	ldp x22, x23, [x0, 16 * 11]
	ldp x24, x25, [x0, 16 * 12]
	ldp x26, x27, [x0, 16 * 13]
	ldp x28, x29, [x0, 16 * 14]
	ldr x30, [x0, 16 * 15]
	
	ldr x1, [x0, 8 * 31]
	msr nzcv, x1
	
	ldp x0, x1, [x0]
	
	// execute test slot
.globl test_slot
test_slot:
	.word 0
	
	// save state to output
	stp x0, x1, [sp, #-16]! // 128 out_x0 out_x1
	
	ldr x0, [sp, #24]
	stp x2, x3, [x0, 16 * 1]
	stp x4, x5, [x0, 16 * 2]
	stp x6, x7, [x0, 16 * 3]
	stp x8, x9, [x0, 16 * 4]
	stp x10, x11, [x0, 16 * 5]
	stp x12, x13, [x0, 16 * 6]
	stp x14, x15, [x0, 16 * 7]
	stp x16, x17, [x0, 16 * 8]
	stp x18, x19, [x0, 16 * 9]
	stp x20, x21, [x0, 16 * 10]
	stp x22, x23, [x0, 16 * 11]
	stp x24, x25, [x0, 16 * 12]
	stp x26, x27, [x0, 16 * 13]
	stp x28, x29, [x0, 16 * 14]
	str x30,     [x0, 16 * 15]
	
	mov x2, x0
	ldp x0, x1, [sp], #16 // 112 out_x0 out_x1
	stp x0, x1, [x2]
	
	mrs x0, nzcv
	str x0, [x2, 8*31]
	
	add sp, sp, #16
	
	// restore callee saved regs
	ldp x29, x30, [sp], #16
	ldp x27, x28, [sp], #16
	ldp x25, x26, [sp], #16
	ldp x23, x24, [sp], #16
	ldp x21, x22, [sp], #16
	ldp x19, x20, [sp], #16
		
	ret
.size execute_test, .-execute_test

backup_space:
.space 12*8
