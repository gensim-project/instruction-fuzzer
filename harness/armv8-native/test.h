#pragma once

#include "define.h"

typedef struct {
	uint32_t size;
	uint32_t data;
} __attribute__((packed)) test_t;

#define REG_COUNT 31
typedef struct {
	uint64_t regs[REG_COUNT];
	uint32_t flags;
} state_t;

extern uint32_t test_slot;
void execute_test(state_t *input, state_t *output);
