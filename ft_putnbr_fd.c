#include <unistd.h>
#include "libft.h"
#include <stdlib.h>

void	ft_putnbr_fd(int n, int fd)
{
	char		*converted;
	unsigned int	index;

	converted = ft_itoa(n);
	if (!converted)
		return;
	index = 0;
	while (converted[index] != '\0')
	{
		write(fd, &converted[index], 1);
		index++;
	}
	free(converted);
}

/*
int main(){
    int n = 452;
    //write(1,&n,3);
    ft_putnbr_fd(n,1);
    return 0;
}*/
