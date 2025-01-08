/*Gross payment of seven employees*/
/*#include<stdio.h>
#define rate 200
int main(){
double hr, pay;

int i = 0;
while(i<7){

printf("Enter hours worked in a week :\n");
scanf("%lf", &hr);
pay = hr * rate;
printf("Salary of the person is %f\n", pay);

i = i +1;
}

printf("All the seven employees are processed\n");
return 0;
}*/


/*
#include<stdio.h>
#include<math.h>

int main(){
int i = 0;
while(i<7){
printf("%d\t %d\n", i, (int)(pow(2,i)));
//printf("%d\t %d\n", i, 2**i);
i = i+1;
}
return 0;
}


#include<stdio.h>
#define rate 200
int main(){
double hr, pay;

int count = 0;
double total_pay = 0;
while(count<7){

printf("Enter hours worked in a week :\n");
scanf("%lf", &hr);
pay = hr * rate;
printf("Salary of the person is %f\n", pay);
 total_pay = total_pay + pay;
count = count +1;
}

printf("All the seven employees are processed\n");
printf("Total payment done is: %f", total_pay);
return 0;
}*/




//Multiplying a List of Numbers

//Multiply data while product remains less than 10000 
/*
#include<stdio.h>
int main(){
int product, item;
product =1;
while(product<1000){

printf("Product = %d\n", product); 
printf("Enter next item> ");
scanf("%d", &item);
 product = product * item;
}
}*/


/*
#include<stdio.h>
int main(){
int x, product, count;
printf("Enter an integer> ");
scanf("%d", &x);
product = x;
count = 0;
while (count < 4) {
//printf("%d\n", product);
product *= x;
count += 1;
printf("%d\n", product);
}

return 0;
}
*/

//----------------------------------------

//Example: Code fragment to compute the sum of N numbers till the sum is greater than equal to 100 using flag ( i.e. status), controlled mechanism.
#include<stdio.h>
int main(){
int status = 0, num, sum =0;
while(status != 1){
 printf("Enter number: \n");
 scanf("%d", &num);
 sum = sum +num;
 printf("num = %d  sum = %d\n", num, sum);
 if (sum >= 100)
   status = 1;
   
   }
   
   return 0;
   
   }
   









