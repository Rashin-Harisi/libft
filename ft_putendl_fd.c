#include <unistd.h>

void ft_putendl_fd(char *s, int fd){
    unsigned int index = 0;
    char new_line= '\n';
    while(s[index] != '\0'){
        write(fd,&s[index],1);
        index++;
    }
    write(fd,&new_line, 1);
};
/*
int main(){
    char test[] = "Hello world";
    ft_putendl_fd(test,1);
    //ft_putendl_fd(test,2);
    return 0;
}*/