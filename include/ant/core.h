/*
Ant C/C++ Standard Library
(c) 2023 Joscha Egloff
*/

#pragma version UL100000
#pragma titel "Ant C/C++ Standard Library"
#if !__has_include("ant/stdbase.h")
#warning "Ant C/C++ Standard Libary isn't correctly configured!"
#if defined(__cpp_exceptions) && __STDC_HOSTED__ == 0
#warning "It's recommend to turn off exceptions in Kernel mode!"
#endif
#endif
#pragma documentation "../../docs"
#ifdef __cplusplus
#define __ANTCPP 1
#else
#define __ANTCPP 0
#endif
#if __STDC_HOSTED__ == 0
#define __NOSTDC__ 1
#endif
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#if __ANTCPP
extern "C"{
#endif
void* malloc(size_t __size);
void* realloc(void* __ptr, size_t __size);
void free(void* __ptr);
#if __ANTCPP && !__ANTOS_HEAP && !__ANTCPP_CLASSES
inline void *operator new(size_t size)
{
    return malloc(size);
};
inline void *operator new[](size_t __size) { return malloc(__size); };
inline void operator delete(void *p) { free(p); };
#define __ANTCPP_CLASSES 1
#endif
#if __ANTOS_HEAP
#define __ANTCPP_CLASSES 1
#endif
#if __ANTCPP
}
#endif
