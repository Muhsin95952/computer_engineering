#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

#define num_thread 7

char *message[num_thread];

void *print(void *threadid)
{
	int *id_ptr, taskid;
	sleep(1);
	id_ptr = (int*)threadid;
	taskid = *id_ptr;
	printf("\n %s from thread %d\n\n", message[taskid], taskid);

	pthread_exit(NULL);

}
int main()
{
	pthread_t thread[num_thread];

	int *taskid[num_thread];
	int rc, t;

	message[0] = "English, Hello world";
	message[1] = "Poshto, Sanga e";
	message[2] = "French, Banjour, le monde";
	message[3] = "Spanish, Hola al mondo";
	message[4] = "Kingon, Nuq neH";
	message[5] = "german, Guten tag, Welt";
	message[6] = "Japan, Sekai e konnichiwa";
	message[7] = "LAtin, Orbis, te saluto";

	for (int t = 0; t < num_thread; t++)
	{
		taskid[t] = (int*)malloc(sizeof(int));
		*taskid[t] = t;
		printf("creating thread %d\n", t);
		rc = pthread_create(&thread[t], NULL, print, (void*)taskid[t]);

		if(rc)
		{
			printf("ERROR, return code from pthread_create() is %d \n ", rc);
			exit(-1);
		}
	}

	pthread_exit(NULL);

	return 0;
}

