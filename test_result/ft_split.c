#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char **ft_split(char const *s, char c){
    char **ptr;

    unsigned int index = 0;
    unsigned int count = 0;
    unsigned int i_ptr = 0;
    unsigned int i_start= 0;
    unsigned int length = ft_strlen(s);
    unsigned int len= 0;;
 


    while(s[index] != '\0'){
        while(s[index] == c) index++;

        if(s[index] != '\0'){
            count++;
            while(s[index] != c && s[index] != '\0') index++;
        } 
    }

    index = 0;
    ptr = malloc ((count + 1) * sizeof(char *));
    if(ptr != NULL){
        while(index < length){
            while(s[index] == c) index++;
            len = 0;
            i_start = index;
            while(s[index] != c && s[index] != '\0'){
                index++;
                len++;
            }
            if(len > 0){
                ptr[i_ptr] = malloc((len + 1) * sizeof(char));
                if(ptr[i_ptr] != NULL){
                    unsigned int i;
                    for(i = 0; i < len; i++){
                        ptr[i_ptr][i] = s[i_start + i];
                    }
                }else return NULL;
                ptr[i_ptr][len] = '\0';
                i_ptr++;
            }
        }
        ptr[i_ptr] = NULL;        

    }else{
        return NULL;
    }

    return ptr;
}
/*
int main(){
    char test[]= ",,Hello,world,,rashin";
    char **result = ft_split(test, ',');
    unsigned int i = 0;
    while(result[i] != NULL){
        printf("the index %d is %s.\n", i , result[i]);
        i++;
    }
    i = 0;
    while(result[i] != NULL){
        free(result[i]);
        i++;
    }
    free(result);
    printf("memory is freed now.\n");
    return 0;
}*/