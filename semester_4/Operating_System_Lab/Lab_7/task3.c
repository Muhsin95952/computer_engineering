#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
	int pid;
	for(int i =1; i<=3; i++){
		pid = fork();
		if(pid == 0)
		{
			execlp(argv[i], argv[i], NULL);
			
		}
		else
		{
			wait(NULL);
		}
	}
		return 0;

}

