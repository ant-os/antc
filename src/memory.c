#include <ant/memory.h>

void memset(void *start, uint8_t value, uint64_t num)
{
    for (uint64_t i = 0; i < num; i++)
    {
        *(uint8_t *)((uint64_t)start + i) = value;
    }
}

void memcpy(void *source, void *dest, size_t len)
{
    int i;
    // declare string and type casting
    char *t = (char *)dest;
    char *s = (char *)source;
    // copying "n" bytes of source to target
    for (i = 0; i < len; i++)
        t[i] = s[i];
}

int memcmp(void *ptr1, void *ptr2, size_t num)
{
    int *p1 = (int *)ptr1;
    int *p2 = (int *)ptr2;

    for (size_t i = 0; i < num; i++)
    {
        if (p1[i] != p2[i])
        {
            return p1[i] - p2[i];
        }
    }

    return 0;
}