#include<stdio.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include<sys/shm.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
int id,*var, i, n;
key_t key;
key=ftok("key.txt",65);
id=shmget(key,50,0664|IPC_CREAT);
printf("Shared memory Identifier=%d\n",id);
var=(int *)shmat(id, NULL,0);
//*var=50;
//*var = atoi(argv[1]);
//scanf("%d", var);
printf("Enter the value of n\n");
scanf("%d", &n);
printf("Enter %d no . of elements\n", n);
for(i=0; i<n; i++){
scanf("%d", &var[i]);}


//printf("You wrote: %d\n", *var);
printf("You wrote: \n");

for(i=0; i<n; i++){
printf("%d ", var[i]);}

shmdt(var);
return 0;
}
