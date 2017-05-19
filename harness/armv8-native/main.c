#include "semihosting.h"
#include "str.h"
#include "heap.h"
#include "test.h"
#include "printf/printf.h"

#include <stdint-gcc.h>

void puts(const char *c) {
	while(*c){
		angel_writec(*c);
		c++;
	}
}

char buffer[128];

uint64_t random() {
	const  uint64_t key = 0x1f2f3f4f5f6f7f8full;
	static uint64_t prev = key ;
	
	prev *= key;
	return prev;
}

void generate_state(state_t *state) {
	for(int i = 0; i < REG_COUNT; ++i) {
		state->regs[i] = random();
	}
	state->flags = random();
}

void copy_test_to_slot(test_t *test) {
	if(test->size != 4) {
		printf("Error! Test has wrong size\n");
		while(1);
	}
	
	test_slot = test->data;
}

void test_results(state_t *input, state_t *output) {
	for(int i = 0; i < REG_COUNT; ++i) {
		if(input->regs[i] != output->regs[i]) {
			printf("X%u\t%lx\t%lx\n", i, input->regs[i], output->regs[i]);
		}
	}
	if(input->flags != output->flags) {
		printf("FLAGS\t%lx\t%lx\n", input->flags, output->flags);
	}
}

void run_test(test_t *test) {
	printf("Test %x\n", test->data);
	
	state_t input_state;
	state_t output_state;
	generate_state(&input_state);
	
	bzero(&output_state, sizeof(output_state));
	
	copy_test_to_slot(test);
	execute_test(&input_state, &output_state);
	
	test_results(&input_state, &output_state);
	
	puts("\n");
}

const char *get_input_file_ptr(const char *args) {
	while(*args != ' ') args++;
	return args+1;
}

int main() {
	// get filename to load
	angel_get_cmdline(buffer, sizeof(buffer));
	
	const char *filename = get_input_file_ptr(buffer);
	printf("Loading file %s\n", filename);
	
	// open test file
	int fd = angel_open(filename, 0);
	printf("Got fd %x\n", fd);
	
	// load file under test
	long size = angel_flen(fd);
	char *data = (char*)malloc(size);
	printf("Reading %u bytes...", size);
	angel_read(fd, data, size);
	printf("done\n");
	
	test_t *tests = (test_t*)data;
	int test_count = size / sizeof(test_t);
	printf("Found %u tests\n", test_count);
	
	for(int i = 0; i < test_count; ++i) {
		run_test(&tests[i]);
	}
	
	free(data);
}
