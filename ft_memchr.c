#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*p_s;
	int		flag;
	unsigned char	*ptr;

	i = 0;
	p_s = (unsigned char *)s;
	flag = 0;
	while (i < n)
	{
		if (p_s[i] == c)
		{
			ptr = &p_s[i];
			flag = 1;
			break ;
		}
		i++;
	}
	if (flag == 1)
		return (ptr);
	else
		return (NULL);
}

/*
int main(){
    char test[] = "welcome to my world";
    char *ptr1 = memchr(&test[6],'d',5);
    char *ptr2 = ft_memchr(&test[6], 'd', 5);
    if(ptr1 != NULL) printf("origin function : %s\n", ptr1);
    else printf("nothing match!\n");

    if(ptr2 != NULL) printf("my function : %s\n", ptr2);
    else printf("nothing match!\n");

    return 0;
}*/
