#include "../test.h"
#include <stdint-gcc.h>

#define ARRAY_SIZE(__arr) (sizeof(__arr) / sizeof(__arr[0]))

static uint64_t random() {
	const  uint64_t key = 0x1f2f3f4f5f6f7f8full;
	static uint64_t prev = key ;
	
	prev *= key;
	return prev;
}

static void generate_state(state_t *state) {
	for(int i = 0; i < ARRAY_SIZE(state->gregs); ++i) {
		state->gregs[i] = random();
	}
	
	for(int i = 0; i < ARRAY_SIZE(state->vregs); ++i) {
		state->vregs[i].lo = random();
		state->vregs[i].hi = random();
	}
	
	state->flags = random() & 0xf0000000;
	state->rounding_mode = 0;
	state->fpsr = 0;
}

context_t default_context = {
	.name = "default",
	.generate = generate_state
};
