/*
#include<pthread.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
void *myfun(void *);
int main(){
pthread_t tid;
int *p;
pthread_create(&tid,NULL,myfun,NULL);
pthread_join(tid,(void **)&p);
printf("returned from thread=%d\n",*p);
return 0;
}
void *myfun(void *arg){
int *ret = malloc(sizeof(int));
*ret=100;
pthread_exit(ret); // or return ret;
}

*/

/*
#include<pthread.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
void *myfun(void *);
int main(){
pthread_t tid; int *p; int a[2];
pthread_create(&tid,NULL,myfun,(void *)a);
pthread_join(tid,(void **)&p);
printf("return=%d\n",*p);
printf("using array=%d\n",a[1]);
return 0;
}
void *myfun(void *arg){
int *argint=(int *)arg;
argint[1]=100;
return argint+1;
}
*/


#include<pthread.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
void *myfun(void *);
int main(){
pthread_t tid; int *p; int a;
pthread_create(&tid,NULL,myfun,(void *)&a);
pthread_join(tid,(void **)&p);
printf("return=%d\n",*p);
printf("using same variable=%d\n",a);
return 0;
}
void *myfun(void *arg){
int *passvar=(int *)arg;
*passvar=100;
pthread_exit(passvar);
}
