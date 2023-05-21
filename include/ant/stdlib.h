/*
Ant C/C++ Standard Library
(c) 2023 Joscha Egloff
*/

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C"{
#endif
void *malloc(size_t __size);
void *realloc(void *__ptr, size_t __size);
void free(void *__ptr);
#ifdef __cplusplus
}
#endif