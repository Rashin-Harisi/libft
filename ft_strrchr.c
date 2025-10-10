#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		flag;
	int		index;
	char		*ptr;

	flag = 0;
	index = ft_strlen(s);
	while (index >= 0)
	{
		if (s[index] == c)
		{
			flag = 1;
			ptr = (char *)&s[index];
			break ;
		}
		index--;
	}
	if (flag == 0 && index == 0)
		return (NULL);
	if (flag == 1)
		return (ptr);
	else
		return (NULL);
}

/*
int main(){
    char test[100] = "Hello world and welcome to my website";
    printf("Origin function: %s\n", strrchr(test, 'o'));
    printf("My function:  %s\n", ft_strrchr(test, 'o'));

    return 0;
}
*/
