#include<stdio.h> 
#include<stdlib.h> 
#include<sys/wait.h> 
#include<unistd.h>
int main(){
int st;
pid_t retSt;

pid_t c = fork();

if(c ==0){
for(int i = 0; i< 20; i++){
printf("I am child and my pid %d and my parent %d\n", getpid(), getppid());
  printf("%d\n", i);
  sleep(1);
  }
  //exit(0);
  }
  
  else{
  
      // for(int i = 0; i< 30; i++){
        // printf("	i = (%d) I am  parent %d\n", i, getpid());
         //sleep(2);
         //}
    printf("I am parent with pid %d\n", getpid());
    wait(&st);
    printf("status = %d\n", st);
    }
    return 0;
    }
