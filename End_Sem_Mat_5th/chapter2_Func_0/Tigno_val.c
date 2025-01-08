/*Converting degrees to radians*/
/*
#include<stdio.h>
#include<math.h>
#define pi 3.142
int main(){
int x;
double y, z;
printf("Enter the degree>  \n");
scanf("%d",&x);
y= x* (pi/180);
z= sin(y);
printf("The value of sin(x) is : %.2f", z);  


return 0;
}
*/

//Exercise section 3.2
#include<stdio.h>
#include<math.h>
int main(){
double x, y, z;
x= 10000;
y = log10(x);

printf("log10(x) = %f\n", y);



z = floor(21.8 + 0.8);
printf("floor(21.8 + 0.8) = %f\n", z);

printf("\\n \n");
return 0;
}
