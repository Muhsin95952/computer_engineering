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
    int fds[argc - 1];
    for (int i = 1; i <= argc - 1; i++)
    {
        fds[i - 1] = open(argv[i], O_RDONLY);
    }
    char buffer[100];

    fd_set readset;
    FD_ZERO(&readset);

    int maxfd = 0;
    for (int i = 0; i < argc - 1; i++)
    {
        FD_SET(fds[i], &readset);
        if (maxfd < fds[i])
            maxfd = fds[i];
    }

    int nrfds = select(maxfd, &readset, NULL, NULL, NULL);
    for (int i = 0; i < argc - 1; i++)
    {
        if (FD_ISSET(fds[i], &readset))
        {
            int rd = read(fds[i], buffer, 100);
            int wr = write(1, buffer, rd);
        }
    }

    return 0;
}