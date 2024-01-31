#include <stdio.h>
#include <dirent.h>
#include <string.h>

int main(int argc, char *argv[])
{
    DIR *folder;
    struct dirent *entry;
    char *fileToSearch = argv[argc-1];
    for(int i=1; i<argc-1; i++)
    {
        folder = opendir(argv[i]);
        while((entry=readdir(folder))!=NULL)
        {
            if(!strcmp(fileToSearch, entry->d_name))
            {
                printf("\nFound %s in %s folder\n", fileToSearch, argv[i]);
                break;
            }
            else
                printf("❌");

        }
        closedir(folder);
    } 
    return 0;
}