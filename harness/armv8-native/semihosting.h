#pragma once

typedef unsigned long fd_t;

#define SYS_OPEN 0x01
#define SYS_CLOSE 0x02
#define SYS_WRITEC 0x03
#define SYS_WRITE0 0x04
#define SYS_WRITE 0x05
#define SYS_READ 0x06
#define SYS_FLEN 0x0C
#define SYS_GET_CMDLINE 0x15
#define SYS_HEAPINFO 0x16

typedef struct {
	void *heap_base;
	void *heap_limit;
	void *stack_base;
	void *stack_limit;
} angel_heap_info_t;

int angel_open(const char *filename, int mode);
int angel_close(int fd);
int angel_writec(char c);
int angel_write0(const char *data);
int angel_write(int fd, const char *data, unsigned long bytes);
int angel_read(int fd, const char *data, unsigned long bytes);
int angel_flen(int fd);
int angel_get_cmdline(char *buffer, unsigned long buffer_size);
int angel_heapinfo(angel_heap_info_t *info);
