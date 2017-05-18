#pragma once

inline int strlen(const char *s) {
	const char *_s = s;
	while(*s) s++;
	return s - _s;
}
