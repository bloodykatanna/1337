#ifndef LIBFT_H
#define LIBFT_H



#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len);
char *ft_strdup(const char *s1);
char *ft_strchr(const char *s, int c);


size_t ft_strlcat(char * dst, const char * src, size_t dstsize);
size_t  ft_strlen(const char *aptx);

void   ft_bzero(void *s, size_t n);
void *ft_memset(void *b, int c, size_t aptx);
void *ft_memcpy(void *dst, const void *src, size_t n);

int ft_strncmp(const char *s1, const char *s2, size_t n);
int ft_atoi(const char *str);
int ft_isprint(int aptx);
int ft_isascii(int x);
int ft_isdigit(int c);
int ft_tolower( int a);
int ft_toupper( int a);
int ft_isalnum(int c);
int	ft_isalpha(int c);



#endif