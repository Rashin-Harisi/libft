#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int ft_isalpha(char c)
{
    if((c >= 65 && c <= 90) || (c >= 97 && c <= 122 )) return 1;
    else return 0;
}
/*
int main (int argc, char *argv[]) {

    int result;
    if(argc < 2) printf("There is not enough input.");
    result = ft_isalpha(*argv[1]);
    //result = isalpha(*argv[1]);
    if(result != 0) printf("The charcter is alphabet");
    else printf("The character is not alphabet");
    return 0;
}*/