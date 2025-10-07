#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	void		*ptr;
	unsigned char	*p;
	unsigned int	index_s;
	unsigned int	index_p;
	unsigned int	s_len;

	index_s = start;
	index_p = 0;
	s_len = ft_strlen(s);
	if (start + len > s_len || len == 0)
	{
		ptr = malloc(1);
		if (ptr != NULL)
		{
			p = (unsigned char *) ptr;
			p[0] = '\0';
			return (ptr);
		}
	}
	ptr = malloc((len + 1) * sizeof(char));
	if (ptr != NULL)
	{
		p = (unsigned char *) ptr;
		while (index_p < len)
		{
			p[index_p] = s[index_s];
			index_p++;
			index_s++;
		}
		p[index_p] = '\0';
	}
	else
		return (NULL);
	return (ptr);
}

/*
int main(){
    char test[] = "Welcom to my website";
    for(int i = 9; i < 9+7 ; i++){
        printf("the index of %c is %d \n",test[i],i);
    }
    char *result = ft_substr(test, 9, 7);
    printf("the result is :%s\n",result);
    free(result);
    return 0;
}*/
