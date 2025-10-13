/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabdolho <rabdolho@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 09:57:30 by rabdolho          #+#    #+#             */
/*   Updated: 2025/10/13 09:57:50 by rabdolho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	void			*ptr;
	unsigned int	index_p;

	index_p = 0;
	if (((int)start + (int)len) > ft_strlen(s) || len == 0)
	{
		ptr = malloc(1);
		if (ptr == NULL)
			return (NULL);
		((unsigned char *)ptr)[0] = '\0';
		return (ptr);
	}
	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (index_p < len)
	{
		((unsigned char *)ptr)[index_p] = s[start];
		index_p++;
		start++;
	}
	((unsigned char *)ptr)[index_p] = '\0';
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
