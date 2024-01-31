#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(int argc, char *argv[]){

    int pid;    
    pid = fork();
    if(pid == 0){
        execl("./sum.out","./sum.out", argv[1], argv[2], NULL);
}

    pid = fork();
    if(pid == 0){
        execl("./product.out","./product.out", argv[1], argv[2], NULL);
}

    return 0;

}
