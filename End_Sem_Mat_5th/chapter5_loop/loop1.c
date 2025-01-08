/** Computes the sum of integers from 1 to n inclusive.*/
#include <stdio.h>
int main(void){
int n,     /* The last number to add, user input */
sum,       /* Sum of the numbers. */
i; /* Counter 1..n */
printf("Enter the number n to compute the sum 1 + 2 + 3 + ... + n> ");
scanf("%d", &n);
i = 0;
sum = 0;
while (i < n) {
i = i + 1;
sum = sum + i;
}
printf("The sum of the integers 1 .. %d is %d.\n", n, sum);
if ( sum == (n * (n + 1))/2 )
     printf("This equals "); /* message 1 */
 else
     printf("This does not equal ");
     
     return 0;
     
     }
