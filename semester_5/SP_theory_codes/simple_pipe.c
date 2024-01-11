#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(){
    int fd[2];
    int r = pipe(fd);
    char buffin[15] = "Muhsin Shah";
    char buffout[15] = "How are you?"; 

    int x = fork();

    if(x){
        printf("Parent Process: ID = %d\n   Buff_in = %s\n  Buff_out = %s\n",getpid(), buffin, buffout );

        write(fd[1], buffout, 15);
    }
    else{
        printf("Child Process: ID = %d\n   Buff_in = %s\n  Buff_out = %s\n",getppid(), buffin, buffout );

        read(fd[0], buffin, 15);
    }
    if(x){
        printf("Parent Process: ID = %d\n   Buff_in = %s\n  Buff_out = %s\n",getpid(), buffin, buffout );
    }
    else{
        printf("Child Process: ID = %d\n   Buff_in = %s\n  Buff_out = %s\n",getppid(), buffin, buffout );
    }



}