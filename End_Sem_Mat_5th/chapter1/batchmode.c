/*Program for miles to kilometers conversion*/

#include <stdio.h> 
#define KMS_PER_MILE 1.609 
int main(void)
{
double miles, kms;
//printf("Enter the distance in miles\n");
scanf("%lf", &miles);

printf("The distance in miles is %.2f miles\n", miles);

kms = KMS_PER_MILE * miles;

printf("That equals %.2f kilometers.\n", kms);     /* Displays the distance in kilometers. */
return (0);
}
