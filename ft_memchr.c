#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
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
    char test[] = "bonjour";
    char *ptr1 = memchr(test,'o',7);
    char *ptr2 = ft_memchr(test, 'o', 7);
    write(1,test,strlen(ptr1));
    printf("\n");
    //printf("origin function : %ld\n", strlen(ptr1));
    //else printf("nothing match!\n");
    write(1,test,strlen(ptr2));
    printf("\n");
    //printf("my function : %ld\n", strlen(ptr2));
    //else printf("nothing match!\n");

    return 0;
}*/
