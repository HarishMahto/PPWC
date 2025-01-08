

/* Program for dynamic memory allocation--------------------------------------*/

/*
#include<stdio.h>
#include<stdlib.h>
int main(){
 int *ptr;
 ptr = (int *)malloc(sizeof(int));
 if (ptr!= NULL){
     printf("memory successfully created by malloc\n");
     }	
     else
       {
	 printf("memory  not created\n");
}
free(ptr);
printf("Memory is free\n");
return 0;
}
*/



/*

#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int* ptr;
    int n, i;
     n = 5;
    printf("Enter number of elements: %d\n", n);
 
    ptr = (int*)calloc(n, sizeof(int));
     
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {
        
        printf("Memory successfully allocated using calloc.\n");
 
        
        for (i = 0; i < n; ++i) {
            ptr[i] = i + 1;
        }
 
       printf("The elements of the array are: ");
        for (i = 0; i < n; ++i) {
            printf("%d, ", ptr[i]);
        }
 
        
        n = 10;
        printf("\n\nEnter the new size of the array: %d\n", n);
  
        ptr = realloc(ptr, n * sizeof(int));
 
        printf("Memory successfully re-allocated using realloc.\n");
 
       for (i = 5; i < n; ++i) {
            ptr[i] = i + 1;
        }
 
        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i) {
            printf("%d, ", ptr[i]);
        }
 
        free(ptr);
    }
 
    return 0;
}

*/




//To find maximum element in an array
#include<stdio.h>
#include <stdlib.h>

void findLargest(int* arr, int N)
{
    int i;
 
    
    for (i = 1; i < N; i++) {
       
        if (*arr < *(arr + i)) {
            *arr = *(arr + i);
        }
    }
 
    
    printf("Largest element = %d \n", *arr);
}
int main(){
int *ptr;
int n =5, i;
int max = 0;
ptr = (int*)malloc(n*sizeof(int));
if(ptr!=NULL)
  printf("Memory successfully created\n");
else
   printf("Memory couldnot be created\n");
   
 
 
 for(i = 0; i<n; i++){
   scanf("%d", ptr + i);
   }
   
 printf("The elements in the array are:  \n");
  
  for(i = 0; i<n; i++){
   printf("%d ", *(ptr + i));
   } 
   printf("\n");
   
   findLargest(ptr, n);
   return 0;
   
   }
 
  





