//Figure 7.2
/* Computes the mean and standard deviation of an array of data and 
* Displays the difference between each item and the mean
*/
#include<stdio.h>
#include<math.h>
#define SIZE 8
void main(){
int i;
double arr[SIZE], arr1[SIZE];
double stdv, mean, sum, sum_sqr;
printf("Enter the %d items separated by blank:  ", SIZE);
sum =0;
sum_sqr= 0;
for(i =0; i<SIZE; i++){

scanf("%lf", &arr[i]);

sum =sum + arr[i];

arr1[i] = arr[i]* arr[i];
sum_sqr = sum_sqr+ arr1[i];
}

printf("Sum is %f\n", sum);
printf("Square is %f\n", sum_sqr);

mean = sum/SIZE;

stdv = sqrt((sum_sqr/SIZE) - mean * mean );

printf("The mean is %.2f.\n", mean);
printf("The standard deviation is %.2f.\n", stdv);




printf("\nTable of differences between data values and mean\n");
printf("Index          Item          Difference\n");
for (i = 0; i < SIZE; ++i){
printf("%3d%8c%9.2f%5c%9.2f\n", i, ' ', arr[i], ' ', arr[i] - mean);
}
}














