#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <fcntl.h>

int readline(int file, char *buffer, int buffer_size){
    int readbytes = 0;
    char *buffer;
    for(int i = 0; i; i++){
        int fd = read(file, &buffer[i], 1){
            if(buffer[i] == "." || fd == 0){
                break;
                }
            }
        }
            readbytes = i;
            return readbytes;
}

int main(int argc, char *argv[])
{
    
}
