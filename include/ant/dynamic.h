#include "defines.h"
#include "types.h"
#include "memory.h"
#include "stdlib.h"

static_assert(__cplusplus, "C++ needs to be available to make dynamic.h work!");

/* Actuall start of dynamic.h */
#if !defined(__ANTCPP_DYNAMIC)
#define __ANTCPP_DYNAMIC 1
template <typename T>
class dynamic_allocator
{
public:
    dynamic_allocator(size_t size);
    ~dynamic_allocator();

    T &operator[](size_t index);
    ANT_STATUS operator+=(T object);

    inline size_t size()
    {
        return m_size;
    };
    inline size_t compacity()
    {
        return m_size;
    };
    inline ANT_STATUS relocate()
    {
        T *newBuffer = (T *)realloc(m_buffer, (m_compacity + 1) * sizeof(T));
        if (newBuffer == NULL)
            return STATUS_OUT_OF_MEMORY;
        m_buffer = newBuffer;
    };

protected:
    T *m_buffer;
    size_t m_compacity;
    size_t m_size;
};

template <typename T>
inline dynamic_allocator<T>::dynamic_allocator(size_t _size)
{
    m_size = _size;
    m_compacity = m_size + 1;
    m_buffer = (T *)malloc((m_size + 1) * sizeof(T));
};

template <typename T>
inline dynamic_allocator<T>::~dynamic_allocator()
{
    free(m_buffer);
};

template <typename T>
inline T &dynamic_allocator<T>::operator[](size_t index)
{
    return m_buffer[index];
};

#endif // __ANTCPP_DYNAMIC
