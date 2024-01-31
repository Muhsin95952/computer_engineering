#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

int main(void)
{
	printf("Process ID is %d\n", getpid());
	printf("Parent process ID is: %d\n", getppid());
	sleep(5);
	printf("I am awake.\n");
	int y = execlp("/sur/bin/ls", "ls", "-l", NULL);
	return 0;
}

