#include <sys/stat.h>
#include <stdio.h>
#include <dirent.h>
#include <pwd.h>
#include <grp.h>
#include <time.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    char cwd[100];
    char *result = getcwd(cwd, 100);
    struct dirent *mydir;
    DIR *dir = opendir(".");

    printf("CWD: %s\n", cwd);
    if (argc < 2)
    {
        while ((mydir = readdir(dir)) != NULL)
        {
            printf("%s  ", mydir->d_name);
        }
        printf("\n");
        return 0;
    }

    struct stat stbuff;
    struct passwd *pwd;
    struct group *grp;
    while ((mydir = readdir(dir)) != NULL)
    {
        if (mydir->d_name[0] == ".")
            continue;

        int x = stat(mydir->d_name, &stbuff);
        time_t atime = stbuff.st_atime;
        struct tm *local_time = localtime(&atime);
        char time_str[80];
        strftime(time_str, sizeof(time_str), "%c", local_time);
        S_ISDIR(stbuff.st_mode) == 1 ? printf("d ") : printf("f ");
        (S_IWUSR & stbuff.st_mode) ? printf("x") : printf("_");
        (S_IRUSR & stbuff.st_mode) ? printf("r") : printf("_");
        (S_IXUSR & stbuff.st_mode) ? printf("w") : printf("_");
        printf(" - ");
        (S_IWGRP & stbuff.st_mode) ? printf("x") : printf("_");
        (S_IRGRP & stbuff.st_mode) ? printf("r") : printf("_");
        (S_IXGRP & stbuff.st_mode) ? printf("w") : printf("_");
        printf(" - ");
        (S_IWOTH & stbuff.st_mode) ? printf("x") : printf("_");
        (S_IROTH & stbuff.st_mode) ? printf("r") : printf("_");
        (S_IXOTH & stbuff.st_mode) ? printf("w") : printf("_");
        printf("\t%ld\t", stbuff.st_nlink);
        pwd = getpwuid(stbuff.st_uid);
        printf("%s\t", pwd->pw_name);
        grp = getgrgid(stbuff.st_gid);
        printf("%s\t", grp->gr_name);
        printf("%s\t", mydir->d_name);
        printf("\t%s\t", time_str);
        printf("%s  ", mydir->d_name);
        printf("\n");
    }
}