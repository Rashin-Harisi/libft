#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int ft_tolower(int c)
{
    if (c > 64 && c < 91)
		return c + 32;
	else
		return c;
}
/*
int main()
{
    char test[15] = "HelLo WorlD!";
    printf("The original function: ");
    for(int i = 0 ; i < 15; i++)
    {
        printf("%c", tolower(test[i]));
    }
    printf("\n");
    printf("My function: ");
    for(int i = 0 ; i < 15; i++)
    {
        printf("%c",ft_tolower(test[i]));
    }
    printf("\n");
    return 0;
}*/
