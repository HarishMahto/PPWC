/*
#include<stdio.h>
void func();
int main(){
  func();
  func();
  func();
return 0;
}

void func(){
static int i =1;  //reinitialization takes place in auto
        i++;                     
       printf("The value of i = %d\n", i);
       }
*/


/* 
#include<stdio.h>
void main(){
static int i = 1;

 {
    int i = 2;
    {
      printf("%d\n", i);
      i = i+1;
     }
     
   int i = 3;   
  printf("%d\n", i);
 }
printf("%d\n", i);
}

*/



 
 
 
 //register storage class
/*
 #include<stdio.h>
void main(){
register int i;
  
  printf("%p\n", &i);
 }
 */
 
 
 #include<stdio.h>
 
int val = 10; /* global variable */
int main(void)
{
int val = 20; /* local variable */
{
extern int val;
printf("global variable val=%d\n", val);
}
printf("local variable val=%d\n", val);
return 0;
}
 
 
 
 
 
 
 
 
 
 
 
 
