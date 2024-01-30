#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include <sys/types.h>

int main(){
    int pid;

    for(int i = 0; i < 8; 1++){
        pid = fork();
        if(pid == 0){
            break;
        }
        if(pid != 0){
            printf("I am parent with ID = %d my child ID = %d\n", getppid(), getpid());
        }
    }
    return 0;
}