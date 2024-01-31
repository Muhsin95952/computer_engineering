#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <errno.h>

int main()
{
    int fds[2];
    int p = pipe(fds);
    int pid = fork();
    char message[100];
    if (pid == 0)
    {
        printf("c: ");
        int inputStd = read(STDERR_FILENO, message, 100);
        int pipeWr = write(fds[1], message, inputStd);
        sleep(2);
        int brPipe = read(fds[0], message, 100);
        int wrStdout = write(1, message, brPipe);
    }
        if (pid > 0)
    {
        printf("p: ");
        int pipeRd = read(fds[0], message, 100);
        int pipeWr = write(1, message, pipeRd);
        int brStdin = read(STDIN_FILENO, message, 100);
        int wrPipe = write(1, message, brStdin);
    }
}