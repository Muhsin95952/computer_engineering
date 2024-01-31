#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/select.h>
#include <dirent.h>

int main()
{
    int mkffo = mkfifo("fifo", S_IRWXU);
    int fd = open("fifo", O_RDWR, S_IRWXU);
    char buff[20], message[100];
    int rd = read(fd, buff, 20);
    int fd2 = open(buff, O_RDONLY);
    int rd1 = read(fd2, message, 100);
    write(fd, message, rd);
}
