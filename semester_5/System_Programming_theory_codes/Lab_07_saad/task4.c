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
    int pid1 = fork(), pid2;
    if (pid1 > 0)
        pid2 = fork();

    char buffer[100];
    if (pid1 == 0 || pid2 == 0)
    {
        fd_set readset;
        FD_ZERO(&readset);
        FD_SET(fd1, &readset);
        int nrfds = select(fd1+1, &readset, NULL, NULL, NULL);
        if (FD_ISSET(fd1, &readset))
        {
            int rd = read(fd1, buffer, 100);
            int wr = write(1, buffer, rd);
        }
    }
    return 0;
}