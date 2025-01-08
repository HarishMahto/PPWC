#include<stdio.h>

void add_arrays(const double ar1[], const double ar2[], double arsum[], int n);

int main(){
int n =4;
const double arr1[] = {2.0, 4.5, 4.0, 5.5};
const double arr2[] = {3.0, 1.5, 4.0, 1.5};
double arsum[n];
//printf("%f", add_arrays(arr1, arr2, arsum, n));
add_arrays(arr1, arr2, arsum, n);
printf("\n\n");
return 0;
}

void add_arrays(const double arr1[], const double arr2[], double arsum[], int n)

{
int i;

for (i = 0; i < n; ++i){
arsum[i] = arr1[i] + arr2[i];

}
printf("The sum of the arrays is: \n");
for(i=0; i<n; i++){
printf(" %.2f  ", arsum[i]);
}
}


