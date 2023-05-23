#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <stdlib.h>
#define NUM_THREAD 5

void *printHello(void *p)
{
	printf("\n %ld: Hello World\n", pthread_self());
	pthread_exit(NULL);
}

int main()
{
	pthread_t threads[NUM_THREAD];
	int rc, t;
	for(t=0; t< NUM_THREAD; t++)
	{
		printf("Creating thread %d\n", t);
		rc = pthread_create(&threads[t], NULL, printHello, NULL);
		if(rc){
			printf("ERROR: return code from thread_create() is %d\n" , rc);
			exit(-1);
		}
	}
	pthread_exit(NULL);
	
	return 0;
}
