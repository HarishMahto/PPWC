#include<stdio.h>

int max(int n1, int n2);
int min(int n1, int n2);
int main(){
int maximum, minimum, n1, n2;

printf("Enter the value of n1: ");
scanf("%d", &n1);
printf("Enter the value of n2: ");
scanf("%d", &n2);
maximum = max(n1, n2);
minimum = min(n1, n2);
printf("maximum = %d\n", maximum);
printf("minimum = %d\n", minimum);

return 0;
}

int max(int n1, int n2){
if (n1> n2)
   return n1;
else
   return n2;
   }

int min(int n1, int n2){
if (n1 < n2)
   return n1;
else
   return n2;
   }




