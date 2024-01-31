#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(void)
{
	fork();
	fork();
	printf("Parent process ID is %d.\n", getppid());
	return 0;
}
