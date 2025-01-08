#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include<sys/wait.h>
int main()
{
pid_t p;
int wstatus;
 p = fork();
if(p == 0) {
   printf("I am child  my_id: %ld and my parent id is %ld\n",(long)getpid(), (long)getppid());
   sleep (30);
   exit(1);
   }
   
 else {
 //wait(NULL);
 wait(&wstatus);
     printf("I am parent  my_id: %ld and my child id is %ld\n",(long)getpid(), (long)p); 
     
     printf("status: %d\n", WIFEXITED(wstatus));
     printf("st: %d\n", WEXITSTATUS(wstatus));
     printf("wstatus: %d\n", wstatus);
    
   printf("st1: %d\n", WIFSIGNALED(wstatus));
   printf("st1a: %d\n", WTERMSIG(wstatus));
     
   printf("st2: %d\n", WIFSTOPPED(wstatus));
   printf("st1b: %d\n", WSTOPSIG(wstatus));
     }
     
     
   printf("Common %ld\n", (long)getpid());  
   return 0;
   }
      
  
