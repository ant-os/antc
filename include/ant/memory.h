/*
Ant C/C++ Standard Library
(c) 2023 Joscha Egloff
*/

#if defined(__STDC_HOSTED__)
#ifdef __ANTC_KERNEL_MEMORY
#warning "Trying to use Kernel Memory while linking with STDC!"
#endif
#endif
#include <stddef.h>
#include <stdint.h>
#ifndef __ANTC_MEMORY
#define __ANTC_MEMORY 1
#if __ANTCPP
extern "C"
{
#endif
void memset(void *start, uint8_t value, uint64_t num);
void memcpy(void *source, void *dest, size_t len);
int memcmp(void *ptr1, void *ptr2, size_t num);
#if __ANTCPP
}
#endif
#endif
