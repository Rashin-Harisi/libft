#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		flag;
	unsigned int	index;
	char		*ptr;

	flag = 0;
	index = ft_strlen(s);
	while (index > 0)
	{
		if (s[index] == c)
		{
			flag = 1;
			ptr = (char *)&s[index];
			break ;
		}
		if (index == 0)
			break ;
		index--;
	}
	if (c == '\0' && flag == 0)
		return ((char *)&s[ft_strlen(s)]);
	if (flag == 1)
		return (ptr);
	else
		return (NULL);
}

/*
int main(){
    char test[20] = "Hello world";
    printf("Origin function: %s\n", strrchr(test, 'b'));
    printf("My function:  %s\n", ft_strrchr(test, 'b'));

    return 0;
}*/
