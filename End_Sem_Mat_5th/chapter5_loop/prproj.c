#include<stdio.h>
#include<math.h>
int main(){
double pr, anit, n, i, payment;


printf("Enter the principal amount, annual interest rate, number of payments:  ");
scanf("%lf%lf%lf", &pr, &anit, &n);

i = anit/12;

payment = i*pr/(1 - pow((1 + i), -n));

printf("Monthly payment is  %.2f", payment);








return 0;
}
