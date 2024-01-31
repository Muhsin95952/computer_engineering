#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/select.h>
#include <sys/time.h>
#include <errno.h>
#include <fcntl.h>


int main(int argc, char* argv[])
{
	if (argc < 2)
		perror("No file Handling....");
	else{
		int N = argc;
        int fd[N];
		for(int i = 1; argv[i] != NULL; i++){

			fd[i] = open(argv[i], O_RDONLY);
		}

		fd_set set;
		FD_ZERO(&set);
		for(int i = 0; i < N-1; i++){
			FD_SET(fd[i], &set);
		}
		int set2 = select(fd[N-1], &set, NULL, NULL, NULL);
		for(int i = 0; i < N; i++){
			if(FD_ISSET(fd[i], &set))
				printf("File [%d] is ready", i);
		}

	}
}

