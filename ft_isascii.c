#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"

int ft_isascii(int c)
{
    if(c >= 0 && c <= 127) return 1;
    else return 0;
}

/*
int main (int argc, char *argv[]) {

    int result;
    if(argc < 2) 
    {
        printf("There is not enough input.");
        return 1;
    }
    printf("test %d\n", atoi(argv[1]));
    result = ft_isascii(atoi(argv[1]));
    //result = isascii(atoi(argv[1]));
    if(result != 0) printf("The charcter is in ascii range.");
    else printf("The character is not in ascii range");
    return 0;
}*/