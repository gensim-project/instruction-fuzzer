#include "semihosting.h"
#include "str.h"
#include <stdint-gcc.h>

void mputs(const char *c) {
	while(*c){
		angel_writec(*c);
		c++;
	}
}

int main() {
	const char *data = "Hello world\n";
	long datalen = strlen(datalen);
	
	mputs(data);
	
	return 0;
}
