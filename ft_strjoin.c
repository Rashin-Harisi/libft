#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2){
    unsigned int s1_length = ft_strlen(s1);
    unsigned int s2_length = ft_strlen(s2);
    void *ptr;
    unsigned int index = 0;
    unsigned int index_p = 0;
    ptr = malloc((s1_length + s2_length + 1) * sizeof(char));
    if(ptr != NULL){
        unsigned char *p = (unsigned char*)ptr;
        while(s1[index] != '\0'){
            p[index_p] = s1[index];
            index++;
            index_p++;
        }
        index = 0;
        while(s2[index] != '\0'){
            p[index_p] = s2[index];
            index++;
            index_p++;
        }
        p[index_p] = '\0';
    }else{
        return NULL;
    }
    return ptr;
};

/*
int main(){
    char s1[] = "Hello";
    char s2[] = " World";
    char *result = ft_strjoin(s1,s2);
    printf("the result is: %s\n", result);
    free(result);
    return 0;
}*/
