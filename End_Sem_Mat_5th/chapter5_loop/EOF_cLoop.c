/*Endfile controlled loop*/
#include <stdio.h>
int main(void)
{
int sum = 0, score, insta;
printf("Scores\n");
insta = scanf("%d", &score);

while (insta != EOF) {
printf("%5d\n", score);
sum += score;

insta = scanf("%d", &score); 
printf("value returned %d:", insta);

}
printf("\nSum of exam scores is %d\n", sum);

return (0);
}


/*int a, b, c, ret;
printf("Enter the values of a  b and c\n");
ret = scanf("%d%d%d", &a, &b,&c);
printf("Value returened by scanf is %d", ret);

return 0;
}
*/

