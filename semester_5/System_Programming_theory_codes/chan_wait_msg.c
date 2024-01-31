#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
int main(void) {
 int x;
 for(int i=0; i<5; i++){
     x = fork();
     if(x == 0){
         printf("I am child and ID = %d and my parent ID = %d\n", getpid(), getppid());
     }
     else{
         wait(NULL);
     }
 }
 return 0;
}