#include "pebble.hpp"

void* operator new(size_t size) {
	return malloc(size);
}

void* operator new[](size_t size) {
	return malloc(size);
}

void operator delete(void *ptr) {
	free(ptr);
}

void operator delete[](void *ptr) {
	free(ptr);
}

#define _FUNCTEXCEPT_H 1
#include <bits/exception_defines.h>

extern "C" void _exit (int) {
  while(1) {};
}

extern "C" int _getpid(void) {
  return 1;
}

extern "C" void _kill(int pid) { while(1); }

extern "C" int _fstat_r(struct _reent*, int, struct stat*) {
    return -1;
}

extern "C" caddr_t _sbrk_r(struct _reent*, int) {
    return 0;
}

extern "C" int _write_r(struct _reent*, int, char*, int) {
    return -1;
}

extern "C" int _close_r(struct _reent*, int) {
    return -1;
}

extern "C" int _isatty_r(struct _reent*, int) {
    return -1;
}

extern "C" int _lseek_r(struct _reent*, int, int, int) {
    return -1;
}

extern "C" int _read_r(struct _reent*, int, char*, int) {
    return -1;
}

int __exidx_start = 0;
int __exidx_end = 0;
