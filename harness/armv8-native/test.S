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

	// V-REGS
	ldp q0, q1, [x0, 256 + (32 * 0)]
	ldp q2, q3, [x0, 256 + (32 * 1)]
	ldp q4, q5, [x0, 256 + (32 * 2)]
	ldp q6, q7, [x0, 256 + (32 * 3)]
	ldp q8, q9, [x0, 256 + (32 * 4)]
	ldp q10, q11, [x0, 256 + (32 * 5)]
	ldp q12, q13, [x0, 256 + (32 * 6)]
	ldp q14, q15, [x0, 256 + (32 * 7)]
	ldp q16, q17, [x0, 256 + (32 * 8)]
	ldp q18, q19, [x0, 256 + (32 * 9)]
	ldp q20, q21, [x0, 256 + (32 * 10)]
	ldp q22, q23, [x0, 256 + (32 * 11)]
	ldp q24, q25, [x0, 256 + (32 * 12)]
	ldp q26, q27, [x0, 256 + (32 * 13)]
	ldp q28, q29, [x0, 256 + (32 * 14)]
	ldp q30, q31, [x0, 256 + (32 * 15)]

	// G-REGS
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
	
	// FLAGS
	ldr x1, [x0, 768]
	msr nzcv, x1
	
	ldp x0, x1, [x0]
	
	// execute test slot
.globl test_slot
test_slot:
	.word 0
	
	// save state to output
	stp x0, x1, [sp, #-16]! // 128 out_x0 out_x1
	
	// G-REGS
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

	// V-REGS
	stp q0, q1, [x0, 256 + (32 * 0)]
	stp q2, q3, [x0, 256 + (32 * 1)]
	stp q4, q5, [x0, 256 + (32 * 2)]
	stp q6, q7, [x0, 256 + (32 * 3)]
	stp q8, q9, [x0, 256 + (32 * 4)]
	stp q10, q11, [x0, 256 + (32 * 5)]
	stp q12, q13, [x0, 256 + (32 * 6)]
	stp q14, q15, [x0, 256 + (32 * 7)]
	stp q16, q17, [x0, 256 + (32 * 8)]
	stp q18, q19, [x0, 256 + (32 * 9)]
	stp q20, q21, [x0, 256 + (32 * 10)]
	stp q22, q23, [x0, 256 + (32 * 11)]
	stp q24, q25, [x0, 256 + (32 * 12)]
	stp q26, q27, [x0, 256 + (32 * 13)]
	stp q28, q29, [x0, 256 + (32 * 14)]
	stp q30, q31, [x0, 256 + (32 * 15)]
	
	mov x2, x0
	ldp x0, x1, [sp], #16 // 112 out_x0 out_x1
	stp x0, x1, [x2]
	
	// FLAGS
	mrs x0, nzcv
	str x0, [x2, 768]
	
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
