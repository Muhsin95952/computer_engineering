#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <errno.h>

int main(int argc, char *argv[])
{
    int fd1 = open(argv[1], O_RDONLY), fd2 = open(argv[2], O_RDONLY);
    if(fd1==-1 || fd2==-1)
        perror("Error: ");
    
    char bff1[100], bff2[100];
    int rd1 = read(fd1, bff1, 100);
    int rd2 = read(fd2, bff2, 100);
    if(rd1==-1 || rd2==-1)
        perror("Error: ");
    
    int wr1 = write(1, bff1, rd1), wr2 = write(1, bff2, rd2);
    if(wr1==-1 || wr2==-1)
        perror("Error: ");
    
    return 0;
}