#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


char *ft_itoa(int n){
    unsigned int count = 0;
    int signe = 1;
    char *ptr;
    unsigned int index = 0;

    if(n == 0){
        count++;
        ptr = malloc((count + 1) * sizeof(char));
        ptr[index] = '0';
        ptr[count] = '\0';
        return ptr;
    }
    if(n < 0 ){ 
        count++;
        signe *= -1;
    };
    unsigned int dividend = (n < 0) ? -n : n;
    while(dividend != 0){
        dividend = dividend /10;
        count++;
    }
    ptr = malloc((count + 1) * sizeof(char));
    if(ptr != NULL){
        
        if(signe < 0) {
            ptr[0] = '-';
            index++;
        }
        ptr[count] = '\0';
        count--;
        dividend = (n < 0) ? -n : n;
        while(dividend != 0 ){
            ptr[count] = (dividend % 10) + '0';
            dividend  = dividend /10 ;
            count--;
        }
    }else return NULL;
    return ptr;
};
/*
int main(){
    int test = -2147483648;
    int test2 = 2147483647;
    char *result = ft_itoa(test);
    char *result2 = ft_itoa(test2);
    printf("the sring format of %d number is : '%s' \n",test,result);
    printf("the sring format of %d number is : '%s' \n",test2,result2);
    free(result);
    free(result2);
    printf("memory is freed now\n");
    return 0;
}*/