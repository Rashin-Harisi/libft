#include <stdio.h>
#include <string.h>
#include "libft.h"

void *ft_memset(void *str, int c, size_t n){
    size_t i = 0;
    unsigned char *p = str;
    while(i < n){
        p[i] = (unsigned char)c;
        i++;
    }
    return str;
};
/*
int main()
{
    char str1[] = "Hello world!";
    char str2[] = "Hello world!";
    memset(str1 + 6, '*', 3);
    ft_memset(str2 + 6 , '*', 3);

    printf("test the origin function: %s\n",str1 );
    printf("test my function: %s\n", str2);
    return 0;
}*/