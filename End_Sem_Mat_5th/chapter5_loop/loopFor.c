/*Factorial of a number-----------------*/

/*#include<stdio.h>
int main(){

int n, i;
int product = 1;
printf("Enter the value of n");
scanf("%d", &n);
for(i =n; i>1; --i){
   product = product * i;
   }
   
   printf("The factorial of the number %d is %d", n, product);
 return 0;
 }
 */
 
 
 
/*------------------------------------------------------------------------------*/ 
 /* Conversion of Celsius to Fahrenheit temperatures */
#include <stdio.h>

#define CBEGIN 10      /* Constant macros */
#define CLIMIT -5
#define CSTEP 5
int
main(void)
{

int celsius;                           /* Variable declarations */

double fahrenheit;

printf("  Celsius         Fahrenheit\n");      /* Display the table heading */


for (celsius = CBEGIN; celsius >= CLIMIT; celsius -= CSTEP)        /* Display the table */
 {
fahrenheit = 1.8 * celsius + 32.0;
printf("%6c%3d%8c%7.2f\n", ' ', celsius, ' ', fahrenheit);
}
return (0);
}
