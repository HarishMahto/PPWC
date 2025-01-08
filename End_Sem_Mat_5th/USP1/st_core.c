

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include<sys/wait.h>
int main(){

pid_t id, wtR;
int stat;
id = fork();
if(id == 0){
//printf("I am child with pid %d\n", getpid());
//int *p = NULL; //core dump and bit 7 =1
//*p = 7;
//or
//sleep (15); kill the child using kill -11 chpid from another window.
exit(0);
}

printf("I am parent: \n");
wtR= wait(&stat);
printf("status = %d\n", stat);// If core dump status = 2^7 + 11

return 0;
}






