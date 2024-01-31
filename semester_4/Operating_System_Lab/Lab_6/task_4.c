#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main()
{
	int N, i;
	pid_t pid;
	printf("Enter a number for process chain: ");
	scanf("%d", &N);

	for(i=0; i<N; i++)
	{
		pid = fork();
		if(pid == 0)
		{
			printf("Child process with PID = %d\n", getpid());
		}
		else if(pid > 0)
		{
			exit(0);
		}
		else{
			printf("Fork() Failed");
		}
	}
	return 0;
}

