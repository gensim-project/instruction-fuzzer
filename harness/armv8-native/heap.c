#include "heap.h"
#include "semihosting.h"

static char *_brk;

void heap_init() {
	angel_heap_info_t heapinfo;
	heapinfo.heap_base = 0;
	heapinfo.heap_limit = 0;
	
	angel_heapinfo(&heapinfo);
	
	_brk = (char*)heapinfo.heap_base;
}

void *malloc(unsigned long size) {
	char *ptr = _brk;
	_brk += size;
	return ptr;
}

void free(void *v) {
	
}
