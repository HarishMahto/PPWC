
/*program that will find the smallest, largest, and average values in a
collection of N numbers.*/

#include<stdio.h>
int main(){
int num, i, max, min, n;
double ave;
printf("Enter the total numbers to be entered: ");
scanf("%d", &n);

printf ("Enter first number: ");
  scanf ("%d", &num);
max =num;
min = num;
int sum =num;

for(i=1; i<n; i++){
printf("Enter the next number: ");
scanf("%d", &num);

if (num > max)
    max = num;
    
if (num < min)
 min = num;
  
  sum = sum + num; 
  ave = sum/n;
    }
    
    ave = (double)sum/n;
    
    printf("the largest number is: %d\n", max);
    printf("the smallest number is: %d\n", min);
    
    printf("sum is : %d\n", sum);
    printf("average is : %f\n", ave);
    
 return 0;
     
     }
     
