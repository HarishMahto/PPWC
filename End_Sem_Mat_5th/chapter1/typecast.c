/*#include<stdio.h>
int main(){
int x = 7, y = 3;
double res;
res = x/y;
printf("The value evaluated is %f\n", res);
res = (double)x/y;
printf("The value evaluated after type cast is %f\n", res);
}*/


#include<stdio.h>
#include<math.h>
#define pi 3.142
int main(){
int x;
double res;
scanf("%d", &x);
res = sin(pi/180 * x);
printf("%f", res);
}
