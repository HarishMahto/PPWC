#include<stdio.h>
int main()
{

int n =3, j=3;

//Decrement operator
//printf("Decrement operator prefix\n");
//printf("%d\n", --n); 
//printf("%d\n", n);

printf("Decrement operator postfix\n");
printf("%d\n", n--); 
printf("%d\n", n);


//Increment operator
//printf("Increment operator prefix\n");
//printf("%d\n", ++j); 
//printf("%d\n", j);

printf("Increment operator postfix\n");
printf("%d\n", j++); 
printf("%d\n", j);
 
 return 0;
 }
