#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/select.h>
#include <sys/time.h>
#include <errno.h>
#include <fcntl.h>

int func(int time){
    struct timeval t;
    t.tv_sec = time;
    t.tv_usec = 0;

    int sec = select(1, NULL, NULL, NULL, &t); 
}

int main(int argc, char* argv[])
{
	if (argc < 2)
		perror("Invalid Arguments. ....");
	else{
		int N = atoi(argv[1]);
        
    func(N);
		
	}
}

