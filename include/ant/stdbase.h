/*  
Ant C/C++ Standard Library
(c) 2023 Joscha Egloff
*/

/// @brief This file sould be automaticly included in every C/C++ source file!
/// This can be done by adding "-include "ant/stdbase.h" to the C/C++ Compiler Flags!



#if __ANTCPP
#define __ANTCPP_HOSTED 1

extern "C" inline void *operator new(size_t size);
extern "C" inline void *operator new[](size_t __size);
extern "C" inline void operator delete(void *p);
#endif

#define __ANT__ "Ant C/C++ Standard Library!"