/* Compute the sum of a list of exam scores. */
#include <stdio.h>
#define SENTINEL -99
int
main(void)
{
int sum = 0, score;
printf("Enter first score (or %d to quit)> ", SENTINEL);
scanf("%d", &score);

while (score != SENTINEL) {
sum += score;
printf("Enter next score (%d to quit)> ", SENTINEL);
scanf("%d", &score); 
//sum += score;
}
printf("\nSum of exam scores is %d\n", sum);

return (0);
}

