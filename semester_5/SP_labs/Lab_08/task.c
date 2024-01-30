#include <unistd.h>
#include <stdlib.h>
#include <sys/time.h>
#include <dirent.h>
#include <stdio.h>
#include <sys/stat.h>
#include <pwd.h>
#include <grp.h>

int main(int argc, char *argv[])
{
    struct stat statbuff;
    struct dirent *direntp;
    struct passwd *pwd;
    struct group *p;
    DIR *mydir = opendir(".");

    while((direntp = readdir(mydir)) != NULL)
    {
        if (argc < 2){
            printf("Name = %s\n", direntp->d_name);
        }
        else{
                 int x = stat(direntp->d_name, &statbuff);
                if(x == -1){
                      perror("error, ");
                    }
                pwd = getpwuid(statbuff.st_uid);
                p = getgrgid(statbuff.st_gid);
                printf("Name = %s\t Size = %d\t Inode No. = %d\t Mode = %d\t No of links = %ld\t user ID = %s\t Group ID = %s\t\n",
                        direntp->d_name, statbuff.st_size, statbuff.st_ino, statbuff.st_mode, statbuff.st_nlink, pwd->pw_name, p->gr_name);
            }
            
    }
}
