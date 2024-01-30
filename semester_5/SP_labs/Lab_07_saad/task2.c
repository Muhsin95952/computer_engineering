#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/select.h>

int main()
{
    int fd1 = open("f1.txt", O_RDONLY);
    int fd2 = open("f2.txt", O_RDONLY);
    char buffer[100];

    fd_set readset;
    FD_ZERO(&readset);
    FD_SET(fd1, &readset);
    FD_SET(fd2, &readset);
    int maxfd = fd1 > fd2 ? fd1 : fd2;
    int nrfds = select(maxfd+1, &readset, NULL, NULL, NULL);
    if (FD_ISSET(fd1, &readset))
    {
        int rd = read(fd1, buffer, 100);
        int wr = write(1, buffer, rd);
    }
    if (FD_ISSET(fd2, &readset))
    {
        int rd = read(fd2, buffer, 100);
        int wr = write(1, buffer, rd);
    }
    return 0;
}