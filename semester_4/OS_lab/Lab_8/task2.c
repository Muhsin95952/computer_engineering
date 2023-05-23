#include <unistd.h>
#include <stdio.h>
#include <pthread.h>
int glob = 5;

void *kidfunc(void *p)
{
	printf("Kid here. Global data was %d.\n", glob );
	glob = 15;
	printf("Kid again Global data is now %d.\n", glob);
}

int main()
{
	pthread_t kid;
	pthread_create(&kid, NULL, kidfunc, NULL);
	printf("Master thread here. Global data = %d.\n",  glob);
	glob = 10;
	pthread_join(kid, NULL);
	printf("Program Ended. Global data is now = %d\n", glob);
	return 0;
}
