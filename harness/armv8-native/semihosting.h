#pragma once

#define SYS_OPEN 0x01
#define SYS_WRITEC 0x03
#define SYS_WRITE 0x05

int angel_open(const char *filename, int mode);
int angel_write(int fd, const char *data, unsigned long bytes);
