/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabdolho <rabdolho@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 09:43:37 by rabdolho          #+#    #+#             */
/*   Updated: 2025/10/13 15:52:27 by rabdolho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>
//#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int				flag;
	unsigned int	index;
	char			*ptr;

	flag = 0;
	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] == (unsigned char)c)
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
    char test[] = "tripouille";
    printf("Origin function:  %s\n", strchr(test, 't'+256));
    printf("My function: %s\n", ft_strchr(test, 't'+256));

    return 0;
}
*/
