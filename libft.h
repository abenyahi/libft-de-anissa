#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>

// String functions
size_t ft_strlen(const char *s);
char *ft_strcpy(char *dest, const char *src);
int ft_strcmp(const char *s1, const char *s2);
char *ft_strcat(char *dest, const char *src);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
char	*ft_strnstr(char *a, char *b, int size);
int ft_strncmp(const char *s1, const char *s2, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);

// Memory functions
void ft_bzero(void *s, size_t n); 
void *ft_memset(void *s, int c, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memchr(const void *s, int c, size_t n);

// Character functions
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);

// Conversion functions
int ft_atoi(const char *str);

#endif