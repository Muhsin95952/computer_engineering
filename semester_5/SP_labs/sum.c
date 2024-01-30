#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int sum = atoi(argv[1]) + atoi(argv[2]);
    printf("Sum = %d\n", sum);

    return 0;

}