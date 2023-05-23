#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

int main()
{
	int N, i;
	pid_t pid;
	printf("Enter an integer: ");
	scanf("%d", &N);

	for(i=0; i<N; i++)
	{
		pid = fork();
		if(pid == 0){
			printf("I am a child process with pid = %d\n", getpid());
			exit(0);
		}
		else if (pid > 0)
		{
			// Parent process
		}
		else
		{
			printf("Fork() failed\n");
		}
	}

	return 0;
}

