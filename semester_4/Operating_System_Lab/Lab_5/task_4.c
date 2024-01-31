#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(void)
{
	int forkresult;
	printf("%d: I am parent. Remember my number!\n", getpid());
	printf("%d: I am now going to fork....\n", getpid());
	forkresult = fork();
	if(forkresult != 0)
	{
		//the parent will execute this code
		printf("%d: My child's pid is %d\n", getpid(), forkresult);
	}
	else
	{
		//forkresult == 0
		//the child will execute
		printf("%d: Hi! I am the child.\n", getpid());
	}
	printf("%d: like father like son. \n", getpid());
	return 0;
}
