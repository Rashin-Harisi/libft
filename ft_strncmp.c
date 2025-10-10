#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n && s1[index] != '\0' && s2[index] != '\0')
	{
		while (s1[index] == s2[index])
			index++;
		return (s1[index] - (s2[index]);
	}
	return (0);
}

/*
int main()
{
    char s1[] = "abc";
    char s2[] = "abd";
    int result1;
    int result2;

    result1 = ft_strncmp(s1,s2,3);
    result2 = strncmp(s1,s2,3);

    printf("my function: %d\n", ft_strncmp(s1,s2,3));
    //if(result1 > 0) printf("%s greater than %s\n", s1,s2);
    //else if(result1 < 0) printf("%s smaller than %s\n", s1,s2);
    //else printf("%s equal to %s\n", s1,s2);
    printf("%d\n", ('c' - 'd'));
    printf("origin function: %d\n",strncmp(s1,s2,3));
    //if(result2 > 0) printf("%s greater than %s\n", s1,s2);
    //else if(result2 < 0) printf("%s smaller than %s\n", s1,s2);
    //else printf("%s equal to %s\n", s1,s2);


    return 0;
}*/
