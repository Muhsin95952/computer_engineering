#include <unistd.h>
#include <stdio.h>
#include <pthread.h>

void *diff(){
	printf("I am p = %d\n and T = %ld\n", getpid(), pthread_self());
	int x = 5, y = 9, z;
	z = x - y;
	printf("Difference = %d\n", z);
	return 0;
}

int main()
{
	printf("I am P = %d\n and T = %ld\n", getpid(), pthread_self());
	long int tid;
	int a = 10, b = 40, s;
	pthread_create(&tid, NULL, diff, NULL);

	s = a + b;
	printf("Sum = %d\n", s);
	pthread_join(tid, NULL);
	return 0;
}



