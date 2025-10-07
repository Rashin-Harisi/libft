#include "libft.h"
#include <stdio.h>
#include <string.h>

//strnstr(const char *big, const char *little, size_t len);

char *ft_strnstr(const char *haystack, const char *needle, size_t len){
    unsigned char *p_haystack = (unsigned char *)haystack;
    unsigned char *p_needle = (unsigned char *)needle;

    unsigned int len_needle  = ft_strlen(needle);
    if(len_needle == 0 ) return (char *)p_haystack;

    unsigned int index_haystack = 0;
    unsigned int index_needle = 0;
    unsigned int first_index;

    while(index_haystack < len && p_haystack[index_haystack] != '\0'){
        if(p_haystack[index_haystack] != p_needle[index_needle] && p_haystack[index_haystack] !='\0') index_haystack++;
        else{
            first_index = index_haystack;
            index_haystack++;
            index_needle++;
            while(p_haystack[index_haystack] == p_needle[index_needle] && p_needle[index_needle] != '\0' && index_haystack < len){
                index_haystack++;
                index_needle++;
            }
            if(index_needle == len_needle)
                return  (char *)&p_haystack[first_index];
            else{
                index_needle = 0;
                index_haystack = first_index + 1;
            }
        }
    };
    return NULL;
};
/*
int main(){
    char haystack[] = "Welcome to Rashin Website";
    char needle[] = "Rashin";
    //printf("the origin function result : %s\n", strnstr(haystack,needle,22));
    printf("My function result : %s\n", ft_strnstr(haystack,needle,17));
    return 0;
}
*/