#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
	int pid = fork();
	if (pid == 0){
		execlp("./task1.out", "task1.out", argv[1], argv[2], argv[3],  NULL);
	}
	else
	{
		wait(NULL);
	}

	return 0;
}

