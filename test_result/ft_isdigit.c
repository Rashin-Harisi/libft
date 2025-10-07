#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int ft_isdigit(char c)
{
    if(c >= '0' && c <= '9') return 1;
    else return 0;
}
/*
int main (int argc, char *argv[]) {

    int result;
    if(argc < 2) printf("There is not enough input.");
    //result = ft_isdigit(*argv[1]);
    result = isdigit(*argv[1]);
    if(result != 0) printf("The charcter is digit");
    else printf("The character is not digit");
    return 0;
}*/