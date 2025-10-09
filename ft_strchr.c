#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int		flag;
	unsigned int	index;
	char		*ptr;

	flag = 0;
	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] == c)
		{
			flag = 1;
			ptr = (char *)&s[index];
			break ;
		}
		index++;
	}
	if (c == '\0' && flag == 0)
		return ((char *)&s[index]);
	if (flag == 1)
		return (ptr);
	else
		return (NULL);
}

/*
int main(){
    char test[20] = "Hello world";
    printf("Origin function:  %s\n", strchr(test, 'o'));
    printf("My function: %s\n", ft_strchr(test, 'o'));

    return 0;
}
*/
