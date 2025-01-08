//Thread Creation
/*
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *add(void *arg){
printf("Thread called function stmt\n");
return NULL;
}

void main(){
pthread_t tid;
pthread_create(&tid, NULL, add, NULL);
pthread_join(tid, NULL);
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *hello(){
printf("Welcome Everyone\n");
}


void main(){

pthread_t tid;
pthread_create(&tid, NULL, hello, NULL);
pthread_join(tid, NULL);
}
*/




#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *sum(void *val){

int *val_num = (int *)(val);
printf("Value = %d\n", *val_num);
}
void main(){
int val = 5;
pthread_t tid;
pthread_create(&tid, NULL, sum, (void *)&val);
pthread_join(tid, NULL);
}
