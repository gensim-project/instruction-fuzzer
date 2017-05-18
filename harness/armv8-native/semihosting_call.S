.text

.globl semihosting_call
semihosting_call:
	hlt 0xf000
	ret
.size semihosting_call, .-semihosting_call
