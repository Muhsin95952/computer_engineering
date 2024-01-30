#include <stdio.h>
#include <unistd.h>
#include <error.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
    int sourse,
    distination;
    char *buffer[100];
    if (argc==1)
    {
        sourse = STDIN_FILENO;
        distination = STDOUT_FILENO;

    }

else if (argc == 2)
{
    sourse = open(argv[1],O_RDONLY);
    dup2 (sourse , STDIN_FILENO);
close(sourse);
}

else if (argc == 3)
{
distination = open(argv[2], O_WRONLY);
dup2 ( distination , STDOUT_FILENO);
close(distination);
}

else 
{
    sourse = open(argv[1], O_RDONLY);
    distination = open (argv[3],O_WRONLY);
    dup2(sourse,STDIN_FILENO);
    dup2(distination,STDOUT_FILENO);
}

    int rd = read(STDIN_FILENO, buffer, 100);
    int wr = write(STDOUT_FILENO, buffer, rd);

}


