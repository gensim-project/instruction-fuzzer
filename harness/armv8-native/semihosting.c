#include "semihosting.h"
#include "str.h"

extern int semihosting_call(int call_no, void *args);

int angel_open(const char *filename, int mode) {
		struct {
			const char *fname;
			long mode;
			long fname_len;
		} args;
		
		args.fname = filename;
		args.mode = mode;
		args.fname_len = strlen(filename);
		
		return semihosting_call(SYS_OPEN, &args);
}

int angel_close(int fd) {
		struct {
			fd_t fd;
		} args;
		
		args.fd = fd;
		
		return semihosting_call(SYS_CLOSE, &args);
}

int angel_writec(char c) {
	struct {
		char c;
	} args;
	
	args.c = c;
	
	return semihosting_call(SYS_WRITEC, &args);
}

int angel_write0(const char *data) {
	return semihosting_call(SYS_WRITE0, data);
}

int angel_write(int fd, const char *data, unsigned long bytes) {
	struct {
		fd_t fd;
		const char *data;
		unsigned long bytes;
	} args;
	
	args.fd = fd;
	args.data = data;
	args.bytes = bytes;
	
	return semihosting_call(SYS_WRITE, &args);
}

int angel_read(int fd, const char *data, unsigned long bytes) {
	struct {
		fd_t fd;
		const char *data;
		unsigned long bytes;
	} args;
	
	args.fd = fd;
	args.data = data;
	args.bytes = bytes;
	
	return semihosting_call(SYS_READ, &args);
}

int angel_flen(int fd) {
	return semihosting_call(SYS_FLEN, &fd);
}

int angel_get_cmdline(char *buffer, unsigned long buffer_size) {
	struct { 
		char *buffer;
		unsigned long buffer_size;
	} args;
	
	args.buffer = buffer;
	args.buffer_size = buffer_size;
	
	return semihosting_call(SYS_GET_CMDLINE, &args);
}

int angel_heapinfo(angel_heap_info_t *info) {
	return semihosting_call(SYS_HEAPINFO, &info);
}

int angel_reportexception(int reason) {
	return semihosting_call(SYS_REPORTEXCEPTION, reason);
}
