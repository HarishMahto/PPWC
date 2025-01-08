/*Programming project 2: Write a program that calculates the user’s body mass index (BMI) and catego-
rizes it as underweight, normal, overweight, or obese, based on the following
table from the United States Centers for Disease Control:*/

#include<stdio.h>
#include<math.h>
int main(){
double h, w, bmi;
printf("Enter height of a person: ");
scanf("%lf", &h);
printf("Enter weight of a person: ");
scanf("%lf", &w);

bmi = (double)(703 * w)/pow(h,2);

printf("%f\n", bmi);
if(bmi< 18.5){
 printf("Underweight\n");
 //return 0;
 }
else if(bmi > 18.5 && bmi< 24.9)
 printf("Normal\n");
else if(bmi > 25.0 && bmi< 29.9)
 printf("Overweight\n");

//else if(bmi> 30.0)
else
  printf("Obese\n");
 
 
 return 0;
 
 }
