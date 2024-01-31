#include <stdio.h>
#include <dirent.h>
#include <string.h>

int main(int argc, char *argv[])
{
    DIR *folder;
    struct dirent *entry;
    char *fileToSearch = argv[argc - 1];

    folder = opendir(argv[1]);
    while ((entry = readdir(folder)) != NULL)
    {
        if (!strcmp(fileToSearch, entry->d_name))
        {
            printf("\nFound %s in %s folder\n", fileToSearch, argv[1]);
            break;
        }
        else
            printf("x");
    }
    closedir(folder);
    return 0;
}