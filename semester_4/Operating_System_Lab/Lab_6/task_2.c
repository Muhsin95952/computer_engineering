#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
	int x = fork();
	if(x==0)
	{	
		int y = execlp("./max.out", "max.c", NULL);
	}
	if(x>0)
	{
		wait(NULL);
	}
	return 0;
}

