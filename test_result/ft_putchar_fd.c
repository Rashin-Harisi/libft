#include "libft.h"
#include <stdio.h>
#include <unistd.h>

void ft_putchar_fd(char c, int fd){
    write(fd, &c, 1);
};

/*
int main(){
    char test = 'A';
    ft_putchar_fd(test,2);
    ft_putchar_fd(test,1);
    printf("\n");
    return 0; 
}*/