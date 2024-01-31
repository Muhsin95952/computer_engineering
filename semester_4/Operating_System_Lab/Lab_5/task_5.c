#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

int main(void)
{
	int pid;
	printf("I am the original process with PID %d and PPID %d\n", getpid(), getppid());
	pid = fork();
	if(pid != 0)
	{
		printf("I am the parent process with PID %d and PPID %d.\n", getpid(), getppid());
		printf("My child's PID is %d.\n", pid);
	}
	else
	{
		sleep(4);
		printf("I am the child process with PID %d and PPID %d.\n", getpid(), getppid());
	}
	printf("PID %d terminates. \n", getpid());
	return 0;
}
