#pragma once

#include "define.h"

typedef struct {
	uint32_t size;
	uint32_t data;
} __attribute__((packed)) test_t;

#define GREG_COUNT 31
#define VREG_COUNT 32
typedef struct {
	uint64_t gregs[GREG_COUNT];			//	0 -- 248
	uint64_t padding;					//	248
	
	struct {
		uint64_t lo, hi;
	} __attribute__((packed)) vregs[VREG_COUNT];				// 256 -- 768
	
	uint32_t flags;						// 768
	uint32_t rounding_mode;				// 772
} __attribute__((packed)) state_t;

extern uint32_t test_slot;
void execute_test(state_t *input, state_t *output);
