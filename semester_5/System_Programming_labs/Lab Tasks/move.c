#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
    int fd1 = open("f2.txt", O_RDONLY);
    if(fd1 == -1){
        perror("Failed to open the file 1");
        return -1;
        }

    int fd2 = open("f1.txt", O_WRONLY|O_CREAT, 777);
    if(fd2 == -1){
        perror("Failed to open the file 2");
        return -1;
        }
    
    char *buff[100];

    int rb = read(fd1, buff, 100);
    if(rb == -1){
        perror("Failed to open the file 3");
        return -1;
        }

    int bw = write(fd2, buff, 100);
    if(bw == -1){
        perror("Failed to open the file 4");
        return -1;
        }

    int u = unlink("f1.txt");
    if(u == -1){
        perror("Failed to open the file 5");
        return -1;
        }
    return 0;
}