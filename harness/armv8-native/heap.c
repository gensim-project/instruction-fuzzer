#include "heap.h"
#include "semihosting.h"
#include "printf/printf.h"

char heap[1024*1024];

static char *_brk = heap;



void heap_init() {
}

void *malloc(unsigned long size) {
	char *ptr = _brk;
	_brk += size;
	return ptr;
}

void free(void *v) {
	
}
