#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>
#include<errno.h>
int main(){
 int stat;
pid_t cpid, retW;
cpid = fork();
if(cpid == -1)
   exit(-1);

if(cpid == 0){
   printf("I am child with pid(%d)\n", getpid());
   sleep(10);
    printf("child (%d) exited\n", getpid());
   }
   
   else{
      printf("I am parent with pid(%d) before wait\n", getpid());
      retW = waitpid(-1, &stat, 0);
      //retW = waitpid(80, &stat, 0);
      
      if(retW == -1){
         perror("Error is: ");
         printf("Waitpid returned error with error number : %d\n", errno);
      }
      printf("cpid returned is (%d)\n",retW);
      printf("status is (%d)\n",stat);

      printf("\n Parent exited\n");
      }
      
      return (0);
      }
   
   
   


