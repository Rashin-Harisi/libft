#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

/*
int main () {

    int result = 60;
    printf("result of origin function: %d\n",isdigit(result));
    printf("result of my function : %d\n",ft_isdigit(result));   
    return 0;
}*/
