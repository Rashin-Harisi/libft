#include <string.h>
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>


char *ft_strdup(const char *s){
    unsigned int length = ft_strlen(s);
    void *ptr;
    unsigned int index = 0; 
    ptr = malloc((length + 1) * sizeof(char));
    if(ptr != NULL){
        unsigned char *p = (unsigned char*)ptr;
        while(s[index] != '\0'){
            p[index] = s[index];
            index++;
        }
        p[index] = '\0';
    }
    return ptr;
};

/*
int main(){{
    char test[] = "hello world";

    char *new_memo = ft_strdup(test);
    char *new_memo2 = strdup(test);
    printf("the new memory's content with my function is:  %s\n", new_memo );
    printf("the new memory's content with origin function is:  %s\n", new_memo2 );

    free(new_memo);
    free(new_memo2);
    printf("memory is freed.");

    return 0;
}}
*/