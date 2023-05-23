#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

int main(void)
{
	for (int i = 0; i<8; i++){
		int x = fork();
		if (x == 0){
			break;
		}

		for(int i=0; i<8; i++){
			if(x==0)
				wait(NULL);
			else
				printf("Child %d with PID: %d.\n", i, getpid());
		
		}
	}	
	return 0;
}
