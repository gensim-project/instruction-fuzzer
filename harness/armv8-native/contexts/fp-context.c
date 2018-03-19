#include "../test.h"
#include <stdint-gcc.h>

#define ARRAY_SIZE(__arr) (sizeof(__arr) / sizeof(__arr[0]))

extern unsigned int nr_floats;
extern unsigned int float32s[];
extern unsigned long float64s[];

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
		state->vregs[i].hi = random();
	}
	
	state->flags = random() & 0xf0000000;
	state->rounding_mode = 0;
	state->fpsr = 0;
}

static void generate_state32(state_t *state) {
	generate_state(state);
	for(int i = 0; i < ARRAY_SIZE(state->vregs); ++i) {
		state->vregs[i].lo = float32s[random() % nr_floats];
	}
}

static void generate_state64(state_t *state) {
	generate_state(state);
	for(int i = 0; i < ARRAY_SIZE(state->vregs); ++i) {
		state->vregs[i].lo = float64s[random() % nr_floats];
	}
}

context_t fp32_context = {
	.name = "fp32",
	.generate = generate_state32
};

context_t fp64_context = {
	.name = "fp64",
	.generate = generate_state64
};
