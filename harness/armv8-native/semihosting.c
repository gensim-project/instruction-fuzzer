#include "semihosting.h"
#include "str.h"

extern int semihosting_call(int call_no, void *args);

int angel_open(const char *filename, int mode) {
		struct {
			const char *fname;
			int mode;
			int fname_len;
		} args;
		
		args.fname = filename;
		args.mode = mode;
		args.fname_len = strlen(filename);
		
		return semihosting_call(SYS_OPEN, &args);
}

int angel_write(int fd, const char *data, unsigned long bytes) {
	struct {
		long fd;
		const char *data;
		unsigned long bytes;
	} args;
	
	args.fd = fd;
	args.data = data;
	args.bytes = bytes;
	
	return semihosting_call(SYS_WRITE, &args);
}

int angel_writec(char c) {
	struct {
		char c;
	} args;
	
	args.c = c;
	
	return semihosting_call(SYS_WRITEC, &args);
}
