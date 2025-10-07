#include "libft.h"
#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n){
    unsigned int i = 0;
    unsigned char *p_s = (unsigned char *)s;
    int flag = 0;
    unsigned char *ptr; 
    while (i < n)
    {
        if(p_s[i] == c ){
            ptr = &p_s[i];
            flag = 1;
            break;
        }
        i++;
    }
    if(flag == 1) return ptr;
    else return NULL;

};

/*
int main(){
    char test[] = "welcome to my world";
    char *ptr1 = memchr(&test[6],'d',5);
    char *ptr2 = ft_memchr(&test[6], 'd', 5);
    if(ptr1 != NULL) printf("origin function : %s\n", ptr1);
    else printf("nothing match!\n");

    if(ptr2 != NULL) printf("my function : %s\n", ptr2);
    else printf("nothing match!\n");

    return 0;
}*/