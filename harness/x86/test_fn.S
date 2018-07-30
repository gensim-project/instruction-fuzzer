.text

// input context:
// uint64 flags
// uint64 rax, rcx, rdx, rbx, -, rbp, rsi, rdi, r8, r9, r10, r11, r12, r13, r14, r15

// Set up the input context (pointer in rdi) and store the output 
// context pointer (rsi)
.globl test_fn_preamble
test_fn_preamble:
	push %rbx
	push %rbp
	push %r12
	push %r13
	push %r14
	push %r15
	push %rsi
	
// load input context into regs
	mov 0x8(%rdi), %rax
	mov 0x10(%rdi), %rcx
	mov 0x18(%rdi), %rdx
	mov 0x20(%rdi), %rbx
	// rsp so ignore
	mov 0x30(%rdi), %rbp
	mov 0x38(%rdi), %rsi
	// do rdi last
	mov 0x48(%rdi), %r8
	mov 0x50(%rdi), %r9
	mov 0x58(%rdi), %r10
	mov 0x60(%rdi), %r11
	mov 0x68(%rdi), %r12
	mov 0x70(%rdi), %r13
	mov 0x78(%rdi), %r14
	mov 0x80(%rdi), %r15

// load XMM regs
	movups 0x88(%rdi), %xmm0
	movups 0x98(%rdi), %xmm1
	movups 0xa8(%rdi), %xmm2
	movups 0xb8(%rdi), %xmm3
	movups 0xc8(%rdi), %xmm4
	movups 0xd8(%rdi), %xmm5
	movups 0xe8(%rdi), %xmm6
	movups 0xf8(%rdi), %xmm7
	movups 0x108(%rdi), %xmm8
	movups 0x118(%rdi), %xmm9
	movups 0x128(%rdi), %xmm10
	movups 0x138(%rdi), %xmm11
	movups 0x148(%rdi), %xmm12
	movups 0x158(%rdi), %xmm13
	movups 0x168(%rdi), %xmm14
	movups 0x178(%rdi), %xmm15

	push 0x0(%rdi) // push flags onto stack
	andq $0xcc5, 0x0(%rsp) // mask out stuff we don't care about
	popf // pop flags into flags
	
	mov 0x40(%rdi), %rdi // load rdi
	
	push 1f     // push test slot location onto stack
//	jmp *0x8(%rsp) // jump to test slot location
1: 

.globl test_fn_preamble_end
test_fn_preamble_end:
.word 0

// Store back the test results and return
.globl test_fn_postamble
test_fn_postamble:
	push 1f
//	jmp *0x8(%rsp)
1:
	pushf // save flags before doing anything else	
	
	push %rsi // save output rsi
	mov 0x20(%rsp), %rsi // load saved rsi
	
	mov %rax, 0x8(%rsi)
	mov %rcx, 0x10(%rsi)
	mov %rdx, 0x18(%rsi)
	mov %rbx, 0x20(%rsi)
	# skip SP
	mov %rbp, 0x30(%rsi)
	# do rsi last
	mov %rdi, 0x40(%rsi)
	mov %r8, 0x48(%rsi)
	mov %r9, 0x50(%rsi)
	mov %r10, 0x58(%rsi)
	mov %r11, 0x60(%rsi)
	mov %r12, 0x68(%rsi)
	mov %r13, 0x70(%rsi)
	mov %r14, 0x78(%rsi)
	mov %r15, 0x80(%rsi)
	
	# save RSI
	pop 0x38(%rsi)
	
	# save flags
	pop 0x0(%rsi)
	andq $0xcc5, 0x0(%rsi) // mask out stuff we don't care about
	
	add $0x18, %rsp
	
	movups %xmm0 , 0x88(%rsi) 
	movups %xmm1 , 0x98(%rsi) 
	movups %xmm2 , 0xa8(%rsi) 
	movups %xmm3 , 0xb8(%rsi) 
	movups %xmm4 , 0xc8(%rsi) 
	movups %xmm5 , 0xd8(%rsi) 
	movups %xmm6 , 0xe8(%rsi) 
	movups %xmm7 , 0xf8(%rsi) 
	movups %xmm8 , 0x108(%rsi)
	movups %xmm9 , 0x118(%rsi)
	movups %xmm10, 0x128(%rsi)
	movups %xmm11, 0x138(%rsi)
	movups %xmm12, 0x148(%rsi)
	movups %xmm13, 0x158(%rsi)
	movups %xmm14, 0x168(%rsi)
	movups %xmm15, 0x178(%rsi)
	
	pop %r15
	pop %r14
	pop %r13
	pop %r12
	pop %rbp
	pop %rbx
	
	retq

.globl test_fn_postamble_end
test_fn_postamble_end:
.word 0

.data

.globl test_fn_preamble_size
test_fn_preamble_size:
.long test_fn_preamble_end - test_fn_preamble

.globl test_fn_postamble_size
test_fn_postamble_size:
.long test_fn_postamble_end - test_fn_postamble	

