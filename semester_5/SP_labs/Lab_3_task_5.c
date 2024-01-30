#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include <sys/types.h>

int main(int argc, char *argv[]){
    int factorial = 1;
    for(int  i = 1; i < argc; i++){
        int pid = fork();
        if(pid == 0){
            for(int j = 0; i < argv)
        }
    }

}