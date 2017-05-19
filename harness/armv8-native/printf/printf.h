#pragma once

#include <stdarg.h>

extern int printf(const char *fmt, ...);
extern int sprintf(char *buffer, const char *fmt, ...);
extern int scatf(char *buffer, const char *fmt, ...);
extern int snprintf(char *buffer, int size, const char *fmt, ...);
extern int vsnprintf(char *buffer, int size, const char *fmt, va_list args);
