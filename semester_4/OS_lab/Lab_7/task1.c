#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int sum = 0;
	for(int i=1; i<argc; i++){
		sum = sum + atoi(argv[i]);
	}
	printf("sum of all CLAs is %d.::", sum);
return 0;
}
