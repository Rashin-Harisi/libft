/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabdolho <rabdolho@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 09:54:24 by rabdolho          #+#    #+#             */
/*   Updated: 2025/10/13 09:55:04 by rabdolho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>
//#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	index_big;
	int				index_little;
	unsigned int	first_index;

	index_big = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (index_big < len && big[index_big] != '\0')
	{
		index_little = 0;
		first_index = index_big;
		while (big[index_big] == little[index_little]
			&& little[index_little] != '\0' && index_big < len)
		{
			index_big++;
			index_little++;
		}
		if (index_little == ft_strlen(little))
			return ((char *)&big[first_index]);
		else
			index_big++;
	}
	return (NULL);
}

/*
int main(){
    char haystack[] = "Welcome to Rashin Website";
    char needle[] = "shin";
    //printf("the origin function result : %s\n", strnstr(haystack,needle,22));
    printf("My function result : %s\n", ft_strnstr(haystack,needle,17));
    return 0;
}*/
