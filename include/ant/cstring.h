/*
Ant C/C++ Standard Library
(c) 2023 Joscha Egloff
*/

#ifndef __ANTC_STRING
#define __ANTC_STRING 1
#if __ANTCPP
extern "C"{
#endif
size_t strlen(const char *str);
char *strchr(const char *str, int c);
int toupper(int c);
int tolower(int c);
char *strstr(const char *haystack, const char *needle);
char *strtok(char *str, const char *delimiters);
char *strpbrk(const char *str, const char *delimiters);
char *strdup(const char *str);
int strcmp(char* a, char* b);
#if __ANTCPP
}
#endif
#endif
