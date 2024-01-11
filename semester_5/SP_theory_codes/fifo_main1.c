#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <time.h>

int main(int argc, char* argv[]) {
    int arr[5];
    srand(time(NULL));
    int i;
    for (i = 0; i < 5; i++) {
        arr[i] = rand() % 100;
        printf("Generated %d\n", arr[i]);
    }
    
    mkfifo("sum", 0777);

    // NOTE: You will have to create the fifo using the command "mkfifo sum"
    int fd = open("sum", O_WRONLY);
    if (fd == -1) {
        return 1;
    }
    
    if (write(fd, arr, sizeof(int) * 5) == -1) {
        return 2;
    }
    
    close(fd);
    
    return 0;
}