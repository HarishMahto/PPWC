
// The Ordering of processes depending on the manner of wait called
#include<stdio.h>
#include<sys/wait.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
#include<string.h>


int main(void){
pid_t fc, sc, tc;
fc = fork();
if (fc==0){
  sc = fork();
     if(sc == 0)
         printf("process P1\n");
         
     else
         {
         wait(NULL);
         printf("Process P2\n");    
         }
       }
 else{
      wait(NULL);
      tc = fork();
        if (tc== 0)
           printf("process P3\n");
        else{
            wait(NULL);
            printf("Process P4\n");
        } 
        }    
 
  
return 0;
}
