#include "libft.h"
#include <stdlib.h>
#include <stdio.h>


char *ft_strmapi(char const *s, char (*f)(unsigned int, char)){
    unsigned int  index = 0;
    unsigned int length = ft_strlen(s);
    char *ptr; 
    ptr = malloc((length + 1) * sizeof(char));
    if(ptr != NULL){
        while(s[index] != '\0'){
            ptr[index]=f(index,s[index]);
            index++;
        }
        ptr[index]= '\0';
    }
    else return NULL;
    return ptr;
};

/*
char ft_upper(unsigned int index, char c){
    (void)index;
    if(c >= 97 && c <= 122){
        return c -= 32;
    }
    return c;
}

int main(){
    char test[]= "hello wWorld";
    unsigned int index = 0;
    char *result = ft_strmapi(test,ft_upper);
    printf("the result is : %s\n", result);
    free(result);
    return 0;
}*/