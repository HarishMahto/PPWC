/*

#include <stdio.h>
int main() {
   int x[4];
   int i;

   for(i = 0; i < 4; ++i) {
      printf("&x[%d] = %p\n", i, &x[i]);
   }

   printf("Address of array x: %p", x);

   return 0;
}
*/


/*
#include <stdio.h>
int main() {

  int i, x[6], sum = 0;

  printf("Enter 6 numbers: ");

  for(i = 0; i < 6; ++i) {
  // Equivalent to scanf("%d", &x[i]);
      scanf("%d", x+i);

  // Equivalent to sum += x[i]
      sum += *(x+i);
  }

  printf("Sum = %d", sum);

  return 0;
}*/



/*Substraction of pointer arrays---------------------------------*/

#include<stdio.h>
int main(){
int x[] = {10, 60 , 30, 20, 12, 15};
int *i, *j;
i= &x[0];
j = &x[2];

//int k = j-i;
 printf("The value of x[1] - x[0] is %d\n", *j -*i );
 
  //printf("The value of j - i is %d\n", k );
  printf("The value of j - i is %ld\n", j-i );
 return 0;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
