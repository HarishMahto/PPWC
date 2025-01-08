//Program to illustrate sem_getvalue(), sem_wait() and sem_post()
#include<stdio.h>
#include<semaphore.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include <semaphore.h>
void main() {
char *n1 = "/mysemaphore1";
  sem_t * K;
  int val;
 K=sem_open(n1, O_CREAT| O_RDWR,0644,15); //sem_open() returns the address of the semaphore
 printf("%p\n",K);//prints the address
 
 sem_getvalue(K, &val);//gets the value assigned
 printf("%d\n", val);

sem_post(K);//Increments the value of semaphore by 1
sem_getvalue(K, &val);
printf("%d\n", val);

sem_wait(K); //Decrements the semaphore value by 1
sem_getvalue(K, &val);
printf("%d\n", val);

sem_close(K);
sem_unlink(n1);

}
