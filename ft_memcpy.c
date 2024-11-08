#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    const char *s;
    size_t a;

    d = dest;
    s = src;
    a = 0;
    if (!d && !s)
        return (NULL);
    while(a < n)
    {
        d[a] = s[a];
        a++;
    }
    return (dest);

}
