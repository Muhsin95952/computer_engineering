#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
	int x = fork();
	if (x==0){
		int y =  execlp("/usr/bin/ls", "ls", "-l", NULL);
	}
	if (x>0){
		wait(NULL);
	}
	return 0;
}
