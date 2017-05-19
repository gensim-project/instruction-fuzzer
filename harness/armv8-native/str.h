#pragma once

inline int strlen(const char *s) {
	const char *_s = s;
	while(*s) s++;
	return s - _s;
}

inline void bzero(void *s, unsigned size) {
	char *data = (char*)s;
	while(size--) *data++ = 0;
}
