#include<stdio.h>
int main(){
int a, b, c;
scanf("%d%d%d", &a, &b, &c);
printf("The values before swap are  a = %d b= %d c=%d\n", a, b, c);

a= a+b+c;
b=a-b-c;
c=a-b-c;
a= a-b-c;
printf("The values after swap are  a = %d b= %d c=%d\n", a, b, c);
return 0;
}
