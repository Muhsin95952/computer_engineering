#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(int argc, char *argv[]){
   
   int arr[20]={1,3,4,5,6,46,35,3,5,6,7,2,6,3,2,6,7,5,3,5};
   int NoOfChild = 10;
   int childSum = 0;
   int total_sum = 0;
    int status;

   // to assgn the array the random no's
//for (int i= 0; i<100; i ++){
  //  arr[i] = rand();
//}
// for passing the arguments to the childern

    for (int i = 0 ; i < NoOfChild; i++){
        int pid = fork();
       
        if (pid == -1){
             printf("child not created");
             exit(-1);
        }
        
        else if (pid == 0){

        childSum = arr[i*2] + arr [2* i +1];

        return childSum;
        }
       
        else{
            
            int  childpid = wait(&status);
        
                if (WIFEXITED(status) && !WEXITSTATUS(status))
                printf("Child %ld terminated normally\n", (long)childpid);
            else if (WIFEXITED(status))
                printf("Child %ld terminated with return status %d\n",
                        (long)childpid, WEXITSTATUS(status));
            else if (WIFSIGNALED(status))
                printf("Child %ld terminated due to uncaught signal %d\n",
                        (long)childpid, WTERMSIG(status));
            else if (WIFSTOPPED(status))
                printf("Child %ld stopped due to signal %d\n",
                        (long)childpid, WSTOPSIG(status));

            total_sum += WEXITSTATUS(status) ;
            printf("sum  = %d \n",total_sum);
        }
    }
    
    return 0;
}
