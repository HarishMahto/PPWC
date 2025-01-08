//Program for water bill

#include<stdio.h>
#define DEMAND_CHG 35.00
#define PER_1000_CHG 1.10
#define LATE_CHG 2.00
int main(){
int previous;
int current;
double unpaid;
double bill;
int used;
double use_charge; 

printf("This program figures a water bill ");
printf("based on the demand charge\n");
printf("($%.2f) and a $%.2f per 1000 ", DEMAND_CHG, PER_1000_CHG);
printf("gallons use charge.\n\n");
printf("A $%.2f surcharge is added to ", LATE_CHG);
printf("accounts with an unpaid balance.\n");
printf("\nEnter unpaid balance, previous ");
printf("and current meter readings\n");
printf("on separate lines after the prompts.\n");
printf("Press <return> or <enter> after ");
printf("typing each number.\n\n");


printf("Enter unpaid balance> $");
scanf("%lf", &unpaid);
printf("Enter previous meter reading> ");
scanf("%d", &previous);
printf("Enter current meter reading> ");
scanf("%d", &current);



used = current - previous;
use_charge = used * PER_1000_CHG;

double late_charge; //charge for nonpayment of part of previous balance
if (unpaid > 0)
   late_charge = LATE_CHG; //Assess late charge on unpaid balance.
else
   late_charge = 0.0;
   
   
bill = DEMAND_CHG + use_charge + unpaid + late_charge;
if (late_charge > 0.0) {
  printf("\nBill includes $%.2f late charge", late_charge);
  printf(" on unpaid balance of $%.2f\n", unpaid);
}
printf("\nTotal due = $%.2f\n", bill);

return 0;
}

