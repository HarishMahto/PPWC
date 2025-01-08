//Question 1
//To find the simple interest
/*
#include<stdio.h>
int main(){
double si, p, r;
int n;
printf("Enter the the principal amt and interest rate: \n");
scanf("%lf%lf", &p, &r);
printf("Enter the duration of loan taken: \n");
scanf("%d", &n);
 si = p*n*r/100;
 printf("The interest generated is: %f\n", si);
 return 0;
 }
 */
 
 
 //Question 2
/* 
#include<stdio.h>
int main(){

double total_sp, total_profit;
double total_cp, one_cp;  //Total Cost price 

printf("Enter the values: \n");
printf("Total_sp: ");
scanf("%lf",&total_sp);
printf("Total_profit: ");
scanf("%lf",&total_profit);
total_cp = total_sp - total_profit;
one_cp = total_cp/15;
printf("Cost Price of one item: %f \n", one_cp);
return 0;
}  
*/


//Question 3

/*
#include <stdio.h>

int main()
{
    int amount;
  
    printf("Enter the amount to be withdrawn (in hundreds): ");
    scanf("%d",&amount);
   
    printf("\n\nRequired notes of Rs. 100  :  %d", amount / 100);  // e.g. if amount entered is 987 then 987 / 100 will answer 9 (because amount is an intiger variable) 
   
   printf("\n\nRequired notes of Rs. 50   :  %d", (amount % 100) / 50);   //e.g. 987 % 100 will answer 87 and then 87 / 50 will answer 1.
  
   printf("\n\nRequired notes of Rs. 10   :  %d", (((amount % 100) % 50) / 10));
   
   printf("\n\nAmount still remaining Rs. :  %d", (((amount % 100) % 50) % 10));
   
    return 0;
}
*/



//Question 5

#include <stdio.h>
#define TP 80000
int main()
{
int Total_men, no_of_lit, l_m, l_w, ill_m,ill_w, Total_illetrate;
Total_men =52*TP/100;
no_of_lit = 48*TP/100;
l_m = 35*TP/100;
l_w = 13*TP/100;

Total_illetrate = TP -(l_m +l_w);

printf("Total illetrate = %d\n",Total_illetrate );
ill_m = Total_men - l_m;
ill_w = TP - (Total_men + l_w);

printf("Total no. of illetrate men : %d\n",ill_m);
printf("Total no. of illetrate women : %d\n",ill_w);
return 0;

}
































