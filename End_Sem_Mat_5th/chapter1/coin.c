/*The coin problem*/

#include <stdio.h>
int main(void)
{
char first, middle, last;
int pennies, nickels;
int dimes, quarters;
int dollars;
int change;
int total_dollars;
int total_cents;

printf("Type in your 3 initials and press return> ");
scanf("%c%c%c", &first, &middle, &last);
printf("\n%c%c%c, please enter your coin information.\n", first, middle, last);

printf("Number of $ coins > ");     /* Get the count of each kind of coin. */
scanf("%d", &dollars);
printf("Number of quarters> ");
scanf("%d", &quarters);
printf("Number of dimes > ");
scanf("%d", &dimes);
printf("Number of nickels > ");
scanf("%d", &nickels);
printf("Number of pennies > ");
scanf("%d", &pennies);

total_cents = 100 * dollars +25 * quarters + 10 * dimes + 5 * nickels + pennies;  /* Compute the total value in cents. */

total_dollars = total_cents / 100;                                              /* Find the value in dollars and change. */
change = total_cents % 100;



printf("\n\n%c%c%c Coin Credit\nDollars: %d\nChange: %d cents\n",first, middle, last, total_dollars, change);  /* Display the credit slip with value in dollars and change. */
return (0);
}
