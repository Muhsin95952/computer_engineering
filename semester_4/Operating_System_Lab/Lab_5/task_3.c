#include <stdio.h>
#include <unistd.h>

int main (void)
{
	printf("Here I am just before first Forking statement\n");
	fork();
	printf("Here I am just after first Forking statement\n");
	fork();
	printf("Here I am just after second Forking statement\n");
	fork();
	printf("Here i am just after third forking statement \n");
	printf("	Hello World from process %d!\n", getpid());
	return 0;
}
	
