#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <dirent.h>
#include <stdio.h>
#include <string.h>

void depth(char *dirname)
{
    struct dirent *p;
    struct stat x;
    DIR *d;

    chdir(dirname);
    d = opendir(dirname);

    while((p = readdir(d)) != NULL)
    {
        if(p->d_name[0] == '.')
        {
            continue;
        }
        printf("%s ", p->d_name);
        stat(p->d_name, &x);
        if(S_ISDIR(x.st_mode))
        {
            depth(p->d_name);
            chdir("..");
        }
    }

}

int main(int argc, char *argv[])
{
    depth(argv[1]);
}