#include <stdio.h>
#include <unistd.h>

int main(void)
{
	printf("hello world!\n");
	fork();
	printf("i am after Forking\n");
	printf("\t I am process %d . \n ", getpid());
	return 0;
}
