#include<stdio.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include<sys/shm.h>
int main()
{
int id,*rvar, i;
key_t key;
key=ftok("key.txt",65);
id=shmget(key,50,0664);
printf("Shared memory Identifier=%d\n",id);
rvar=(int *)shmat(id, NULL,SHM_R);
size_t size = (sizeof(rvar)/sizeof(rvar[0]));
printf("%ld", sizeof(rvar));
printf("%ld", size);
printf("Value in shared memory:\n");

for(i=0; i<size; i++){
printf("%d ", rvar[i]);}
shmdt(rvar);
shmctl(id,IPC_RMID,NULL);
return 0;
}
