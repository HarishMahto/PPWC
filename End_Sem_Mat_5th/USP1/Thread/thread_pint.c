//passing an integer
/*
#include<pthread.h>
#include<stdio.h>
#include<unistd.h>

void *passint(void *arg);
int main(){
int x=20;pthread_t t;
pthread_create(&t,NULL,passint,(void *)&x);
pthread_join(t,NULL);
return 0;
}void *passint(void *arg){
int recv;
recv=*((int *)(arg));
printf("Parameter value=%d\n",recv);
pthread_exit(NULL);
}*/



//passing a string
/*
#include<stdio.h>
#include<pthread.h>
void *stringpass(void *arg);
int main(){
char *msg="ITER";
pthread_t t;
pthread_create(&t,NULL,stringpass,(void *)msg);
pthread_join(t,NULL);
return 0;
}
void *stringpass(void *arg)
{
char *str;
str=(char *)(arg);
printf("String received=%s\n",str);
pthread_exit(NULL);
}*/




//passing an array
/*
#include<stdio.h>
#include<pthread.h>
void *arraypass(void *arg);
int main()
{
int arr[]={10,20,30,40};
pthread_t tid;
pthread_create(&tid,NULL,arraypass,(void *)arr);
pthread_join(tid,NULL);
printf("Bye....main thread\n");
return 0;
}
void *arraypass(void *arg)
{
int *ar,i;
ar=(int *)arg;
for(i=0;i<4;i++){
printf("Received:arr[%d]=%d\n",i,*(ar+i));//or printf("Received:arr[%d]=%d\n",i,ar[i]); 
}
pthread_exit(NULL);
}
*/




//passing array of strings
#include<stdio.h>
#include<pthread.h>
void *stringarraypass(void *arg);
int main(){
char *msg[]={"iter","soa","ibcs","sum"};
pthread_t tid;
pthread_create(&tid,NULL,stringarraypass,(void *)msg);
pthread_join(tid,NULL);
printf("Bye....main thread\n");
return 0;
}
void *stringarraypass(void *arg){
char **str;
int i;
str=(char **)arg;
for(i=0;i<4;i++){
printf("Received:arr[%d]=%s\n",i,str[i]);
}
pthread_exit(NULL);
}






