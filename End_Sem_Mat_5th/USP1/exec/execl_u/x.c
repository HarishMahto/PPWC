
/*
#include <stdio.h>
#include <unistd.h>
int main()
{
    printf("step before execl call\n");
    execl("/bin/ps", "ps", NULL);
    printf("step after execl call");
}
*/




/*
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h> 

int main(void) {
pid_t childpid;
childpid = fork();
if (childpid == -1) {
perror("Failed to fork");
return 1;
}
if (childpid == 0) {
//child code
execl("/bin/ls", "ls", "-l", NULL);
perror("Child failed to exec ls");
return 1;
}
if (childpid != wait(NULL)) {
//parent code
perror("Parent failed to wait due to signal or error");
return 1;
}
else{
  printf("I am parent\n");
  return 0;}
return 0;
}

*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h> 

int main(void) {
pid_t childpid;

childpid = fork();
if (childpid == -1) {
perror("Failed to fork");
return 1;
}
if (childpid == 0) {
//child code
//execl("/bin/ls", "ls", "-a", "-s", NULL);//path of the file, args, terminating null

char *file_n = "ls";
execlp(file_n, "-a", "-s", NULL);
perror("Child failed to exec ls");
return 1;
}
if (childpid != wait(NULL)) {
//parent code
perror("Parent failed to wait due to signal or error");
return 1;
}
else{
  printf("I am parent\n");
  return 0;}
return 0;
}

