/*program demonstrating explicit type conversion (type cast)*/

#include<stdio.h>
int main(){
char y = 'a';
int x =5;
float z;
x = x+y;
z = x + 2.0;
printf("value of z is %d", (int)z);
return 0;
}
