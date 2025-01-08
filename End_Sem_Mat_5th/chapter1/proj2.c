/*program to assist in the design of a hydroelectric dam.*/

#include<stdio.h>
#define G 9.80     //Gravitational constant
#define X 0.9       //a constant value for conversion to power
int main(){
double ht, cms, mass, w, power1;

printf("Enter height of the dam> ");
scanf("%lf", &ht);

printf("\nEnter the number of cubic meters of water per second>  \n");
scanf("%lf", &cms);

mass = cms * 1000;

w = mass * G * ht;

printf("Work done is %f watts", w);

power1 = X * w;

printf("Power generated is %f watts", power1);

return 0;
}

