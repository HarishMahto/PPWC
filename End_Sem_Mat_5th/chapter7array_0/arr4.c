/*Sort elements of array in ascending order---------------------------------------------*/

#include <stdio.h>
void main()
{
    int arr1[100];
    int n, tmp, i, j;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    for(i=0;i<n;i++){
       scanf("%d",&arr1[i]);    
    }
    
printf("The values stored in the array are: ");

for(i=0; i<n; i++){
     printf("%5d", arr1[i]);
}

printf("\nThe sorted list of elements is: ");

for(i=0; i<n; i++){
  for(j =i+1; j<n; j++){
      if(arr1[j] <arr1[i])
            {
                tmp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = tmp;
            }
        }
  
  }
  
  for(i=0; i<n; i++){
     printf("%5d", arr1[i]);
}

printf("\n\n");
  
  }
