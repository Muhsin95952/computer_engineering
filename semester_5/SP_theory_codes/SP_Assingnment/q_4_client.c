#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/select.h>

int main(int argc, char *argv[])
{
    int mkffo = mkfifo("fifo", S_IRWXU);
    int fd = open("fifo", O_RDWR, S_IRWXU);
    if (mkffo == -1 && errno != EEXIST)
        perror("Error: ");
    char buff[20];
    strcpy(buff, argv[1]);
    int wd = write(fd, buff, 20);
    sleep(4);
    fd_set readset;
    FD_ZERO(&readset);
    FD_SET(fd, &readset);
    int nrfd = select(fd + 1, &readset, NULL, NULL, NULL);
    while (1)
    {
        FD_ZERO(&readset);
        FD_SET(fd, &readset);
        if(FD_ISSET(fd, &readset))
        {
            for(;;)
            {
                int rd = read(fd, buff, 6);
                if(rd==0)
                    break;
                int wr = write(1, buff, rd);
            }
            break;
        }
    }
}