/*#include<stdio.h>
int main(){
 double x ;
 printf("Enter the value of x");
 scanf("%lf", &x);
 printf("The roundof value of %f is %.2f\n", x, x);
 return 0;
 }*/
 
 #include<stdio.h>
 int main(){
 double x;
 int y;
  printf("Enter the value of x");
 scanf("%lf", &x);
 y = (int)(x + 0.5);
 printf("The roundof value of %f is %d\n", x, y);
 return 0;
 }
 
 
/* #include<stdio.h>
 int main(){
 char x ='A';
 char y;
 y = 'A' + 1;
 
 printf("%c\n", y);
 }
 
 #include<stdio.h>
int main(int argc, char *argv[])
{
int i;
for(i=0;i<argc;i++)
printf("argv[%d]: %s\n",i,argv[i]);
return 0;
}*/
 
