#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

int main(void)
{
	int i = 0, j = 0, pid, k, x;
	pid = fork();
	if (pid == 0){
		for (i=0; i<20; i++){
			for (k=0; k<1000; k++){
				printf("Child: %d.\n", i);
			}
		}
	}
	else{
		for(j=0; j<20; j++){
			for (x=0; x<10000; x++){
				printf("Parent: %d.\n", j);
			}
		}
	}
	return 0;
}

