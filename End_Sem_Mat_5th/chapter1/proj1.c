/*programming project1, mileage reimbursement*/

#include<stdio.h>
int main(){
double orb, ore, travel, reamb;                      //Declaration of the variables
printf("MILEAGE REIMBURSEMENT CALCULATOR\n");
printf("----------------------------------\n");
printf("Enter beginning odometer reading> ");
scanf("%lf", &orb);
printf("\nEnter ending odometer reading> ");
scanf("%lf", &ore);
travel = ore-orb;
printf("\nYou traveled %f miles.\n", travel);
reamb = travel * 0.35;
printf("your reimbursement is $%f.\n", reamb);
return 0;
}
