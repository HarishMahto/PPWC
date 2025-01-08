/*menu driven program using switch*/

#include <stdio.h>
#include<stdlib.h>

int fact(int n);
int prime(int n);
int main(){

int n, res;
int opt;
while(1){
printf("\n1. Factorial");
printf("\n2. Prime");
printf("\n3. Exit");
printf("\nEnter an option: ");
scanf("%d", &opt);

switch(opt){
case 1:
res = fact(n);

   //printf("The factorial of the number is %d: ", fact(n));
   
break;

case 2:
res = prime(n);

break;

case 3:

exit(0);

}

}

return 0;
}

int fact(int n){
int i;
int product = 1;
printf("Enter the value of n: ");
scanf("%d", &n);
for(i =n; i>1; --i){
   product = product * i;
   }
   
  // return product;
   
   printf("The factorial of the number %d is %d", n, product);
   }



int prime(int n){

int i;
printf("\nEnter n: ");

scanf("%d",&n);

for(i=2;i<=n-1;i++)

{

if (n%i==0)
{

printf("n is not prime");

break;

}

}

if(n==i)

{

printf("n is prime");

}

}
