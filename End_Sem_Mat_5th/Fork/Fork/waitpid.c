
//Parent waiting for a specific child
/*
#include<stdio.h> 
#include<stdlib.h> 
#include<sys/wait.h> 
#include<unistd.h> 
 int main(){
   int stat;
   pid_t WR;
 pid_t c1 = fork();
  if(c1 == 0){
     printf("I am child 1 with pid %d and parent %d\n", getpid(), getppid());
     exit (0);
     }
   else{
      printf("I am parent %d\n", getpid());
      WR = waitpid(c1, &stat, 0);
      printf("Staus returned = %d\n", stat);
      pid_t c2 = fork();
      if(c2 == 0)
        {
          printf("I am child 2 with pid %d and parent %d\n", getpid(), getppid());
          exit(1);
          }
          
          
       
          }
          
          printf("Value of WR = %d\n", WR);
          
          return (0);
          
          }
          
  */
  
  
//Parent is not blocked          
          
/*         
#include<stdio.h> 
#include<stdlib.h> 
#include<sys/wait.h> 
#include<unistd.h> 
int main(){
int stat = -1, i;
pid_t WR;
pid_t c1 = fork();
if(c1 == 0){
   for(i = 0; i< 5; i++){
     printf("I am child(%d) and parent (%d) i = %d\n", getpid(), getppid(), i);
     sleep (1);
     }
     exit (10);
     }
   else{
      printf("I am parent %d\n", getpid());
      //WR = waitpid(c1, &stat, 0);
      while(WR = waitpid(-1, &stat, WNOHANG)!=c1);

      printf("Staus returned = %d\n", stat);
     }
       return (0);
        }
*/

//Parent is not blocked        
        
/*        
#include<stdio.h> 
#include<stdlib.h> 
#include<sys/wait.h> 
#include<unistd.h> 
int main(){
int stat = -1, i;
pid_t WR;
pid_t c1 = fork();
if(c1 == 0){
   for(i = 0; i< 25; i++){
     printf("I am child(%d) and parent (%d) i = %d\n", getpid(), getppid(), i);
     }
     exit (0);
     }
   else{
   i=0;
   while((WR = waitpid(c1, &stat, WNOHANG))!=c1)
   {
     i=i+1;
      printf("parent run %d --->  I am parent %d\n", i, getpid());
      printf("parent Staus returned = %d wr = %d\n", stat, WR);
      //printf("Staus returned = %d\n", stat);
      }
      printf("parent Staus returned = %d wr = %d\n", stat, WR);
      printf("Staus returned = %d \n", stat);
       return (0);
        }
        
        }
 */       
  
      
        
/*        
//Getting the status of stopsignal       
#include<stdio.h> 
#include<stdlib.h> 
#include<sys/wait.h> 
#include<unistd.h> 
int main(){
int stat = -1, i;
pid_t WR;
pid_t c1 = fork();
if(c1 == 0){
   for(i = 0; i< 25; i++){
     printf("I am child(%d) and parent (%d) i = %d\n", getpid(), getppid(), i);
     sleep (3);
     }
     exit (0);
     }
   else {
    WR = waitpid(c1, &stat, WUNTRACED);
     
      printf("I am parent %d\n",  getpid());
      if (WIFSTOPPED(stat)){
        printf("The stopped signal is : %d \n",WSTOPSIG(stat));
      }
      
      }
      
      sleep(80);
      
       return (0);
        
        
        }
          
*/          
          
          
        
#include<stdio.h> 
#include<stdlib.h> 
#include<sys/wait.h> 
#include<unistd.h> 
int main(){
int stat = -1, i;
pid_t WR;
pid_t c1 = fork();
if(c1 == 0){
   for(i = 0; i< 20; i++){
     printf("I am child(%d) and parent (%d) i = %d\n", getpid(), getppid(), i);
     sleep (3);
     }
     exit (0);
     }
    if(c1>0){
    
        
        while(1){
        WR = waitpid(c1, &stat, WNOHANG|WUNTRACED|WCONTINUED);
       
        
     
      printf("I am parent %d\n",  getpid());
      printf("status == %d\n",stat);
        if(WIFEXITED(stat)){
        printf("The exit status set %d \n", WEXITSTATUS(stat));
       
        }
        else if (WIFSIGNALED(stat)){
        printf("The termination signal is %d \n", WTERMSIG(stat));
        }
        else if (WIFSTOPPED(stat)){
        printf("The stopped signal is : %d \n",WSTOPSIG(stat));
        
        }
        else if (WIFCONTINUED(stat))
        printf("The prosess is resume\n");
        
        }
       sleep(4);
       }
       printf("The parent process completed .......\n");
      
       return (0);
        
        
        }
          
     
        
  
      
