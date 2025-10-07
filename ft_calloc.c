#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void		*ptr;
	char unsigned	*p;
	unsigned int	total_memory;
	unsigned int	index;

	if (size == 0 || nmemb == 0)
	{
		ptr = malloc(1);
		if (ptr != NULL)
		{
			p = (unsigned char *)ptr;
			p[0] = 0;
		}
		return (ptr);
	}
	total_memory = nmemb * size;
	ptr = malloc(total_memory);
	if (ptr == NULL)
		printf("The allocation memory is failed.");
	else
	{
		index = 0;
		p = (unsigned char *)ptr;
		while (index < total_memory)
		{
			p[index] = 0;
			index++;
		}
	}
	return (ptr);
}

/*
int main(){
    char *ptr_test1 = calloc(5,sizeof(char));
    printf("the origin function: ");
    for(int i =0; i<5; i++) printf("%d", ptr_test1[i]);
    printf("\n");

    char *ptr_test2 = ft_calloc(5,sizeof(char));
    printf("my function: ");
    for(int i =0; i<5; i++) printf("%d", ptr_test2[i]);
    printf("\n");

    free(ptr_test1);
    free(ptr_test2);
    printf("memory is free now.\n");

    return 0;
}*/
