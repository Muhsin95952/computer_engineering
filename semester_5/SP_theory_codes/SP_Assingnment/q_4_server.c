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
    if(mkffo==-1 && errno!=EEXIST)
        perror("Error: ");
    char buff[20];
    int rd = read(fd, buff, 20);
    struct dirent *entry;
    DIR *folder;
    folder = opendir(buff);
    while((entry=readdir(folder)))
    {
        write(fd, entry->d_name, 6);
        write(fd, "\n", 1);
    }
}