#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

int fact(int num){
     if (num<1){
              return 1;
            }else{
           return num * fact(num - 1);
            }
}
int main(int argc, char * argv[]){
    if(argc<2){
        printf("no argument passed to the program");
        exit(EXIT_FAILURE);
    }

    for(int i = 1; i < argc; i++ ){
        pid_t pid = fork();
        
        if (pid == 0){
            int num = atoi(argv[i]);
           printf("Factorial of %d is: %d\n", num, fact(num));
            return fact(num);
        }
        else if(pid == -1){
            printf("this is error: %s ", strerror(errno));
            exit(EXIT_FAILURE);
        }
        else{
            int status;
           int  childpid = wait(&status);
        
             
            if (WIFEXITED(status))
                printf("Child %d terminated with return status %d\n",childpid, WEXITSTATUS(status));
            else if (WIFSIGNALED(status))
                printf("Child %d terminated due to uncaught signal %d\n",childpid, WTERMSIG(status));
            else if (WIFSTOPPED(status))
                printf("Child %d stopped due to signal %d\n",childpid, WSTOPSIG(status));

        }
    }
    return 0;
}
