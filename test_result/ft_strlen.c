#include <stdio.h>
#include <string.h>
#include "libft.h"

int ft_strlen(const char *str){
    int count = 0; 
    while(str[count] != '\0'){
        count++;
    }
    return count;
}
/*
 int main(){
    int result;
    char str[20] = "hello world!";
    printf("test origin function %lu\n", strlen(str));
    result = ft_strlen(str);
    printf("The string has %d characters\n.", result);
    return 0;
 }
*/