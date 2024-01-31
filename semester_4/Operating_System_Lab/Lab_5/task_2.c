#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int pid;
	printf("Hello World!");
	printf("i am parent process and pid is : %d. \n", getpid());
	printf("Here I am before use of Forking\n");
	pid = fork();
	printf("Here I am just after Forking\n");
	if (pid == 0)
		printf("I am the child process and pid is: %d. \n", getpid());
	else 
		printf("I am the Parent process and pid is: %d. \n ", getpid());
	return 0;
}
