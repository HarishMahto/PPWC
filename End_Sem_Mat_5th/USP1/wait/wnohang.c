//Parent is not blocked        
        
       
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
      
  
