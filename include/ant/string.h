/*
Ant C/C++ Standard Library
(c) 2023 Joscha Egloff
*/

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include "cstring.h"
#include "defines.h"
#include "types.h"
#include "memory.h"
#include "stdlib.h"
#include "dynamic.h"

static_assert(__cplusplus, "C++ needs to be available to make string.h work!");

class ant_string: public dynamic_allocator<char>{

public:
    inline ant_string(const char* __str)
        : dynamic_allocator((size_t)strlen(__str) + 1)
    {
        
    };
};


