/*program to find remainder of division of two numeric values of double data type,  use -lm with gcc*/
#include<stdio.h>
#include<math.h>
int main(){
double x = 9, y = 6, z;
z =  fmod(x, y);
printf("%f\n", z);
return 0;
}
