/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabdolho <rabdolho@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 09:41:45 by rabdolho          #+#    #+#             */
/*   Updated: 2025/10/13 12:28:00 by rabdolho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>
#include <stdlib.h>

typedef struct s_split
{
	char            **ptr;
	unsigned int    index;
	unsigned int    i_ptr;
}

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

int	len_substring_handler(char const *s, char c, t_split *data)
{
	unsigned int	len;

	len = 0;
	while (s[data->index] != c && s[data->index] != '\0')
	{
		data->index++;
		len++;
	}
	return (len);
}

void	*free_handler(t_split *data)
{
	unsigned int	index;

	index = 0;
	while (index < data->i_ptr)
	{
		free(data->ptr[index]);
		index++;
	}
	free(data->ptr);
	return (NULL);
}

void	copy_handler(t_split *data, char const *s, char c)
{
	unsigned int	i;
	unsigned int	i_start;
	unsigned int	len;

	i = 0;
	i_start = data->index;
	len = len_substring_handler(s, c, data);
	if (len > 0)
	{
		data->ptr[data->i_ptr] = malloc(len + 1 * sizeof(char));
		if (data->ptr[data->i_ptr] == NULL)
			free_handler(data);
		while (i < len)
		{
			data->ptr[data->i_ptr][i] = s[i_start + i];
			i++;
		}
		data->ptr[data->i_ptr][len] = '\0';
		data->i_ptr++;
	}
}

char	**ft_split(char const *s, char c)
{
	t_split data;

	data.index = 0;
	data.i_ptr = 0;
	data.ptr = malloc ((count_substring_handler(s, c) + 1) * sizeof(char *));
	if (data.ptr == NULL)
		return (NULL);
	while (s[data.index] != '\0')
	{
		while (s[data.index] == c)
			data.index++;
		copy_handler(&data, s, c);
	}
	data.ptr[data.i_ptr] = NULL;
	return (data.ptr);
}

/*
int main()
{
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
