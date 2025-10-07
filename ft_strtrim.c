#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char *ft_strtrim(char const *s1, char const *set){
    unsigned int s_length = ft_strlen(s1);
    if(s_length == 0 ){
       return ft_strdup(s1);
    } 
    unsigned int end = s_length-1;
    unsigned int start = 0;
    unsigned int index = 0;
    unsigned int p_index = 0;
    void *ptr;
    unsigned int len;
    int flag = 0;

    while(s1[start] != '\0'){
        index = 0;
        flag = 0;
        while(set[index] != '\0'){
            if( s1[start] == set[index]){
                flag = 1;
            }
            index++;
        }
        if(flag == 0) break; 
        start++;
    }
    while(1){
        index = 0;
        flag = 0;
        while(set[index] != '\0'){
            if(s1[end] == set[index]){
                flag = 1;
            }
            index++;
        }
        if(end == 0) break;
        if(flag == 0) break;
        end--;
    }

    if(end < start){
        ptr = malloc(1);
        if(ptr != NULL){
            unsigned char *p = (unsigned char*)ptr;
            p[0]='\0';
        }else return NULL;
        return ptr;        
    }

    //printf("the count is %d and start is %u and end is %u\n", count, start , end);
    len = end >= start ? end - start + 1 : 0;
    ptr = malloc((len +1) * sizeof(char));
    if(ptr != NULL){
        unsigned char *p = (unsigned char*)ptr;
        index = start;
        while (index <= end){
            p[p_index] = s1[index];
            index++;
            p_index++;
        }
        p[p_index]= '\0';
    }else{
        return NULL;
    }
    //if(count == 0) printf("There is nothing to trim");
    return ptr;
};
/*
int main(){
    char test[] = "xxxb";
    char set[] = "x";
    char *result = ft_strtrim(test,set);
    if(result == NULL) printf("wether there is a problem with memory allocation.");
    else printf("the result is : %s\n", result);
    free(result);
    return 0;
}*/
