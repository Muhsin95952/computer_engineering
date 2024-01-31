#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <time.h>

int main(int argc, char* argv[]) {
    int arr[5];
    int fd = open("sum", O_RDONLY);
    if (fd == -1) {
        return 1;
    }
    
    int i;
    for (i = 0; i < 5; i++) {
        if (read(fd, &arr[i], sizeof(int)) == -1) {
            return 2;
        }
        printf("Received %d\n", arr[i]);
    }
    
    close(fd);
    
    int sum = 0;
    for (i = 0; i < 5; i++) {
        sum += arr[i];
    }
    printf("Result is %d\n", sum);
    
    return 0;
}