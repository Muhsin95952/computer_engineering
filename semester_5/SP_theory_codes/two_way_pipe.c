// Half Duplex communication system

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(){

    int fd[2];
    char buff[100]; 
    int r = pipe(fd);

    int x = fork();

    if(x){
        int br = read(STDIN_FILENO, buff, 100);
        write(fd[1], buff, br);
        wait(NULL);
        br = read(fd[0], buff, 100);
        write(STDOUT_FILENO, buff, br);
    }
    else{
        int br = read(fd[0], buff, 100);
        write(STDOUT_FILENO, buff, br);
        wait(NULL);
        br = read(STDIN_FILENO, buff, 100);
        write(fd[1], buff, br);

    }
    return 0;
}