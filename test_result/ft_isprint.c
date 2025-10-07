#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"

int ft_isprint(int c)
{
    if(c >= 32 && c <= 126) return 1;
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
    // keep in mind to replace with your own atoi function : ft_atoi
    printf("test origin function %d\n", isprint(*argv[1]));
    result = ft_isprint(*argv[1]);
    if(result != 0) printf("The charcter is printable character.");
    else printf("The character is not printable character.");
    return 0;
}*/