

//program on execlp

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
int main(void)
{
char *temp1,*temp2;
temp1="Funny"; temp2="world";
pid_t pid;
pid=fork();
if(pid==0){
execlp("echo","echo",temp1,temp2,NULL);
printf("Error");
return 1;
}
else{
wait(NULL);
printf("I am parent\n");
}
return 0;
}




/*
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
int main(void)
{

pid_t pid;
pid=fork();
if(pid==0){
execlp("ls","ls","-l",NULL);
printf("Error");
return 1;
}
else{
wait(NULL);
printf("I am parent\n");
}
return 0;
}
*/
