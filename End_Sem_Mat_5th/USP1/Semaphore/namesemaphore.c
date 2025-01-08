/*
#include<fcntl.h>
#include<stdio.h>
#include<sys/stat.h>
#include<semaphore.h>
int main()
{  
  sem_t *sem;
  int val;
  char *name="/iter";
  sem=sem_open(name,O_CREAT,0662,1);// 0662 perm-> rw-rw---x
  sem_getvalue(sem,&val);
  printf("sem value=%d\n",val);  
  sem_wait(sem);
  sem_getvalue(sem,&val);
  printf("sem value=%d\n",val); 
  sem_post(sem);  
  sem_getvalue(sem,&val);
  printf("sem value=%d\n",val); 
  printf(" Iam here\n");
  sem_close(sem);
  getchar();
  //sem_getvalue(sem,&val);
  //printf("sem value=%d\n",val); 
  sem_unlink(name);
   return 0;
}
*/ 
  
 
#include<stdio.h>
#include<fcntl.h>
#include<semaphore.h>
#include<sys/stat.h>
int main(){
sem_t *sem;
int val2;
char *name= "/abc4";
sem = sem_open(name, O_CREAT, 0662, 1);
printf("%p\n", sem);
sem_getvalue(sem, &val2);
printf("sem value = %d\n", val2);


sem_wait(sem);
sem_getvalue(sem, &val2);
getchar();
printf("After wait: sem value = %d\n", val2);

sem_post(sem);
sem_getvalue(sem, &val2);
printf("After post : sem value = %d\n", val2);

sem_close(sem);
sem_unlink(name);
return 0;
}



