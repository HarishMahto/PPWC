
//Printing ABDCABDC......
#include <semaphore.h>
#include <fcntl.h>           /* For O_* constants */
#include <sys/stat.h>        /* For mode constants */

#include <stdlib.h>
#include <stdio.h>

/* FOR FORK */
#include <sys/types.h>
#include <unistd.h>


#include <sys/wait.h>
int main(){
sem_t *S, *T;
pid_t pid;
char *n1="/name01";
 char *n2="/name02";
S = sem_open(n1, O_CREAT | O_EXCL, 0644, 1);
T = sem_open(n2, O_CREAT | O_EXCL, 0644, 0);
pid = fork();
if (pid == 0){

while(1){
sem_wait(S);
sleep(1);
 fprintf(stderr, "AB");
 sem_post(T);
 }
 }
else{
while(1){
 sem_wait(T);
 sleep(1);
 fprintf(stderr, "DC");
 sem_post(S);
 }
 
 sem_close(S);
    sem_close(T);
    sem_unlink(n1);
   sem_unlink(n2);
}
 return 0;
}
