#include <stdio.h>
#include <string.h>
#include "libft.h"

void ft_bzero(void *str, size_t n){
    size_t i = 0;
    unsigned char *p = (unsigned char*)str;
    while(i < n){
        p[i] = '\0';
        i++;
    }
};
/*
int main()
{
    char str1[] = "Hello world!";
    char str2[] = "Hello world!";
    bzero(str1 + 6, 3);
    ft_bzero(str2 + 6 , 3);

    printf("test the origin function: %s\n",str1 );
    printf("test my function: %s\n", str2);
    return 0;
}*/