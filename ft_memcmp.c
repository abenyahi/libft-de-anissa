#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *str1;
    unsigned char *str2;
    size_t a;

    if (n == 0)
        return (0);    
    str1 = (unsigned char *) s1;
    str2 = (unsigned char *) s2;
    a = 0;
    while (str1[a] == str2[a] && a < n - 1)
    {
        a ++;
    }
    return (str1[a] - str2[a]);
}
/*
int main(void)
{
    printf("%d", ft_memcmp("abcdefghij", "abcdefgxyz", 7));
}*/