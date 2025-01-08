//Program to compute factorial n
#include<stdio.h>
int main(){
int n, i;
int prod = 1;
printf("Enter the value of n: ");
scanf("%d", &n);
for(i = n; i>1; i--){
  prod = prod * i;
 } 
printf("The value of %d! : %d\n", n, prod);  
return 0;
}  
