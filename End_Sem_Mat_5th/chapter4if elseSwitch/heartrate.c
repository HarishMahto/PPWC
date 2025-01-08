//Displays message about heart rate.

#include <stdio.h>
int main(void)
{
int pulse;
int rest_heart_rate;
/* resting pulse rate for 10 secs */
/* resting heart rate for 1 minute */
/* Enter your resting pulse rate */
printf("Take your resting pulse for 10 seconds.\n");
printf("Enter your pulse rate and press return> ");
scanf("%d", &pulse);

rest_heart_rate = pulse * 6;   //Calculate resting heart rate for minute
printf("Your resting heart rate is %d.\n", rest_heart_rate);

if (rest_heart_rate > 56)                    // Display message based on resting heart rate
printf("Keep up your exercise program!\n");
else
printf("Your heart is in excellent health!\n");
return (0);
}
