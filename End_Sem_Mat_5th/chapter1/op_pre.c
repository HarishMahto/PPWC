

//Operator precedence in c

/*
#include<stdio.h>
void main(){

int count = 5, i = 1;
while(count--){
 i++;
   printf("i = %d  count = %d\n", i, count);
   }
   }

*/

/*

#include<stdio.h>
void main(){

int count = 5, i = 1;
while(--count){
 i++;
   printf("i = %d  count = %d\n", i, count);
   }
   }
 */  
   
   
   
   
#include <stdio.h>

int main(){

   int x = 5, y = 5, z;
   printf("x: %d \n", x);

   z = x++;
   printf("Postfix increment: x: %d z: %d\n", x, z);

   z = ++y;
   printf("Prefix increment. y: %d z: %d\n", y ,z);

   return 0;
}
