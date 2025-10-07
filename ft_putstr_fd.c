#include <unistd.h>

void ft_putstr_fd(char *s, int fd){
    unsigned int index = 0;
    while(s[index] != '\0'){
        write(fd,&s[index],1);
        index++;
    }
};
/*
int main(){
    char test[] = "Hello world";
    ft_putstr_fd(test,1);
    ft_putstr_fd(test,2);
    return 0;
}*/