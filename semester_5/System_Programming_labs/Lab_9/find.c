#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <dirent.h>
#include <stdio.h>
#include <string.h>

void find(char *dirname, char *filename)
{
    char a[100];
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
        if(!(strcmp(p->d_name, filename)))
        {
            printf("%s ", getcwd(a, 100));
        }

        stat(p->d_name, &x);
        if(S_ISDIR(x.st_mode))
        {
            find(p->d_name, filename);
            chdir("..");
        }

        if(d == NULL)
        {
            printf("File not found....");
        }
    }
}

int main(int argc, char *argv[])
{
    find(argv[1], argv[2]);
}