
/*
#include<stdio.h>
void display(void);
int x = 10 ;
int main(void)
{
int x = 20 ;
printf("Value of x in main()--> %d\n",x); // local 
display( ) ;
return 0;
}
void display(void){

printf("Value of x in display()---> %d\n",x) ; // global
}
*/





/*
#include<stdio.h>
int val = 10; // global variable 
int main(void)
{
int val = 20; // local variable
{
extern int val;
printf("global variable val=%d\n", val);
}
printf("local variable val=%d\n", val);
return 0;
}
*/



#include<stdio.h>
void display(void);
int x = 10 ;
int y = 5;
int main(void){

int y = 20;
printf("Local y in main = %d\n", y);
{
extern int y;
printf("Global y in main = %d\n", y);
}
extern int x;
printf("Value of x in main()--> %d\n",x); // local 
display( ) ;

return 0;
}
void display(void){

printf("y in display = %d\n", y);
printf("Value of x in display()---> %d\n",x) ; // global
}








