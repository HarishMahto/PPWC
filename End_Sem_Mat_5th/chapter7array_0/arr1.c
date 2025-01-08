


//Initializing with auto and staic in an array
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
static int a[10], i;
for(i = 0; i < 10; i++){
   printf("a[%d] = %d\n", i, a[i]);
}
}

*/




//Program to print the sum of the elements in an array
#include<stdio.h>
void main(){
 int arr[10], i, sum;
 printf("Enter the elements of the array\n");
 for(i =0; i< 10; i++){
   scanf("%d", &arr[i]);
   }
   
 printf("The entered array elements are: \n");
 
 printf("[");
   for(i =0; i< 10; i++){
   //printf("a[%d]: %d\n", i, arr[i]);
   
    printf("%d ", arr[i]);
    
    
      }
      printf(" ]\n");
   
  //code to calculate sum 
   sum = 0;   
   for(i =0; i< 10; i++){
    sum = sum + arr[i];
    } 
    
    printf("The sum of the array elements is: %d\n",sum);


}




//program to print square of the elements in an array---------------
/*
#include<stdio.h>
//#define SIZE 10
void main(){

//int ar[SIZE],  i;
int size, i;
printf("Enter size : ");
scanf("%d", &size);
int ar[size];

//for(i = 0; i<SIZE; i++){
for(i = 0; i<size; i++){
ar[i] = i *i;
 printf("ar[%d] = %d\n", i, ar[i]);
}
}
*/



//--------------------------------------------------------------------
//Declare one array for storing the square roots of the integers from 0 through 10 and a second array for storing the cubes of the same integers.

/*
#include<stdio.h>
#include<math.h>
int main(){
double sqroot_arr[15];
int cube_arr[15];
int i;
for(i = 0; i<11; i++){
sqroot_arr[i] = sqrt(i);
}
printf("The square root of the numbers from 0 to 10 are: \n\n");
for(i= 0; i<11; i++){

printf("%.3lf ", sqroot_arr[i]);
}


for(i = 0; i<11; i++){
cube_arr[i] = i*i*i;
}
printf("\n\nThe cubes of the numbers from 0 to 10 are: \n\n");

for(i= 0; i<11; i++){

printf("%d ", cube_arr[i]);
}

printf("\n");
return 0;
}
*/




/*Program to print reverse of the numbers entered---------------------*/
/*
#include<stdio.h>

void main(){
int arr[10];
int i, n;

printf("Enter the size of the array: ");
scanf("%d", &n);

printf("Enter the elements of the array: \n");

for(i=0; i<n; i++){
scanf("%d", &arr[i]);
}

printf("The values stored in the array are: \n");

for(i=0; i<n; i++){
printf("%5d", arr[i]);
}

printf("\nThe number in the reverse order is: \n");
for(i=n-1; i>=0; i--){
printf("%5d", arr[i]);
}

printf("\n\n");

}*/



/* Program to copy the elements of first array into second array----------------------------------*/
/*
#include <stdio.h>

void main()
{
    int arr1[100], arr2[100];
    int i, n;
	
	
       printf("\n\nCopy the elements one array into another array :\n");
       printf("----------------------------------------------------\n");
	   
       printf("Input the number of elements to be stored in the array :");
       scanf("%d",&n);
   
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
        {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }
    //Copy elements of first array into second array.
    for(i=0; i<n; i++)
    {
        arr2[i] = arr1[i];
    }

    // Prints the elements of first array   
    printf("\nThe elements stored in the first array are :\n");
    for(i=0; i<n; i++)
    {
        printf("% 5d", arr1[i]);
    }

    // Prints the elements copied into the second array. 
    
    printf("\n\nThe elements copied into the second array are :\n");
    for(i=0; i<n; i++)
    {
        printf("% 5d", arr2[i]);
    }
	       printf("\n\n");
}
*/












  
  
  
  

    
    
    
    


