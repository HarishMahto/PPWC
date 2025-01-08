#include<stdio.h>
#include<math.h>
int main(){
double t, T;
printf("Enter duration of power elapsed: \n");
scanf("%lf", &t);

T =  ((4 * (t * t))/t + 2)-20;
printf("T = %f\n", T);
return 0;
}
