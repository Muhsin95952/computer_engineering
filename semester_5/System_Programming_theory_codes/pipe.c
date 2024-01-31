#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define BUFSIZE 10

int main(void) {
    char bufin[BUFSIZE] = "empty";
    char bufout[] = "hello";
    int bytesin;
    pid_t childpid;
    int fd[2];

    if (pipe(fd) == -1) {
        perror("Failed to create the pipe");
        return 1;
    }

    bytesin = strlen(bufin);
    childpid = fork();

    if (childpid == -1) {
        perror("Failed to fork");
        return 1;
    }
    
    if (childpid){
        printf("Parent Process.\n Bufin = %s\n Bufout = %s\n", bufin, bufout);
    }
    else{
        printf("Child Process\n  Bufin = %s\n Bufout = %s\n", bufin, bufout);
    }

    if (childpid) { /* parent code */
        close(fd[0]); // Close unused read end in the parent process
        write(fd[1], bufout, strlen(bufout) + 1);
        close(fd[1]); // Close write end after writing
        wait(NULL);   // Wait for the child to finish
    } else { /* child code */
        close(fd[1]); // Close unused write end in the child process
        bytesin = read(fd[0], bufin, BUFSIZE);
        close(fd[0]); // Close read end after reading
        fprintf(stderr, "[%ld]:my bufin is {%.*s}, my bufout is {%s}\n", (long)getpid(), bytesin, bufin, bufout);
    }
    if (childpid){
        printf("Parent Process\n Bufin = %s\n Bufout = %s\n", bufin, bufout);
    }
    else{
        printf("Child Process\nBufin = %s\n Bufout = %s\n", bufin, bufout);
    }

    return 0;
}
