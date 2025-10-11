#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	count_substring_handler(char const *s, char c)
{
	unsigned int	index;
	unsigned int	count;

	count = 0;
	index = 0;
	while (s[index] != '\0')
	{
		while (s[index] == c)
			index++;
		count++;
		while (s[index] != c && s[index] != '\0')
			index++;
	}
	return (count);
}

int	len_substring_handler(char const *s, char c, unsigned int *index)
{
	unsigned int	len;

	len = 0;
	while (s[*index] != c && s[*index] != '\0')
	{
		(*index)++;
		len++;
	}
	return (len);
}

void	*free_handler(char **ptr, unsigned int *i_ptr)
{
	unsigned int	index;

	index = 0;
	while (index < *i_ptr)
	{
		free(ptr[index]);
		index++;
	}
	free(ptr);
	return (NULL);
}

void	copy_handler(char **ptr, unsigned int *i_ptr, unsigned int *index
		, char const *s, char c)
{
	unsigned int	i;
	unsigned int	len;
	unsigned int	i_start;

	i = 0;
	i_start = *index;
	len = len_substring_handler(s, c, index);
	if (len > 0)
	{
		ptr[*i_ptr] = malloc((len + 1) * sizeof(char));
		if (ptr[*i_ptr] == NULL)
			free_handler(ptr, i_ptr);
		while (i < len)
		{
			ptr[*i_ptr][i] = s[i_start + i];
			i++;
		}
		ptr[*i_ptr][len] = '\0';
		(*i_ptr)++;
	}
}

char	**ft_split(char const *s, char c)
{
	char		**ptr;
	unsigned int	index;
	unsigned int	i_ptr;

	index = 0;
	i_ptr = 0;
	ptr = malloc ((count_substring_handler(s, c) + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	while (s[index] != '\0')
	{
		while (s[index] == c)
			index++;
		copy_handler(ptr, &i_ptr, &index, s, c);
	}
	ptr[i_ptr] = NULL;
	return (ptr);
}

/*
int main(){
    char test[]= ",,Hello,world,,rashin";
    char **result = ft_split(test, ',');
    unsigned int i = 0;
    while(result[i] != NULL){
        printf("the index %d is %s.\n", i , result[i]);
        i++;
    }
    i = 0;
    while(result[i] != NULL){
        free(result[i]);
        i++;
    }
    free(result);
    printf("memory is freed now.\n");
    return 0;
}*/
