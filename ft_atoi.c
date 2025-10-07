#include "libft.h"
#include <stdio.h>
#include <stdlib.h>


//int atoi(const char *nptr);
//long atol(const char *nptr);
//long long atoll(const char *nptr);//


int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	result = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13) || str[i] == '+')
		i++;
	if (str[i] == '-'){
		sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

/*
int main(void)
{
    char str[] = "   +1234abc";
    printf("the origin function : %d\n", atoi(str));
    printf("my function : %d\n", ft_atoi(str));
    return 0;
}*/
