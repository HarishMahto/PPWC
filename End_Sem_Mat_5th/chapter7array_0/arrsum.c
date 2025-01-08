/*
#include <stdio.h>

void main()
{
int n,arr[100],i,sum=0;
//Input size of the array

printf("Enter size of the array: ");
scanf("%d", &n);
//Input elements in array
printf("Enter %d elements in the array: ", n);
for(i=0; i<n; i++)
{
scanf("%d", &arr[i]);
}
//Add each array element to sum
for(i=0; i<n; i++)
{
printf("%d\n", arr[i]);
sum = sum + arr[i];
}
//printf("Sum of all elements of array = %d", sum);

}
*/


/*
//Function printing the array elements
#include<stdio.h>
void print_arr(int *a, int n);
int main(){
int arr[15];
int n;
printf("Enter size of the array: ");
scanf("%d", &n);
//Input elements in array
printf("Enter %d elements in the array: ", n);
for(int i=0; i<n; i++)
{
scanf("%d", &arr[i]);
}


print_arr(&arr[0], n);
}

void print_arr(int *a, int n){
for(int j =0; j<n; j++)
{
//printf("%d ", a[j]);
printf("%d ", *(a + j) );
}
printf("\n");
}

*/


//Sum of array elements

#include <stdio.h>
void sum(int *a, int n);
void main(){
int n,arr[100],i;

printf("Enter size of the array: ");
scanf("%d", &n);

printf("Enter %d elements in the array: ", n);
for(i=0; i<n; i++){
scanf("%d", &arr[i]);}

printf("The entered elements of array is: ");

for(i = 0; i<n; i++){
    printf("%d ", arr[i]);}
  printf("\n");

sum(&arr[0], n);
}


void sum(int *a, int n){
int j;
int add = 0;

for(j = 0; j < n; j++){
    add = add + *a;
    a++; }
printf("Sum of all elements of array = %d\n", add);
}








