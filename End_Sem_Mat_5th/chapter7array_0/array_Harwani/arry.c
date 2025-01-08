#include<stdio.h>
#define MAX 15
int ifexists(int arr3[], int k, int v );
int main(){
 int arr1[MAX];
 int arr2[MAX];
 int arr3[MAX];
 int i, j, k = 0, m = 5;
 
 printf("Enter the value for first array: \n");
 for(i = 0; i< m; i ++){
    scanf("%d", &arr1[i]);}
    
printf("Enter the value for second array: \n");
 for(j = 0; j< m; j ++){
    scanf("%d", &arr2[j]);} 
    
 printf("First array: ");      
   for(i = 0; i< m; i ++){
    printf("%d ", arr1[i]);} 

printf("\n"); 
 
printf("second array: ");      
    for(j = 0; j< m; j ++){
    printf("%d ", arr2[j]);} 

printf("\n");
 
 //Comparing
for(i = 0; i< m; i ++){ 
   for(j = 0; j< m; j ++){
      if(arr1[i] == arr2[j])
         
         if(!ifexists(arr3, k, arr1[i])){
            arr3[k] = arr1[i];
            k++;}
          }
          }
          
if(k > 0) {
    printf("\nThe common elements in the two arrays are:\n");
       for(i = 0;i<k;i++)
            printf("%d\n",arr3[i]);
            }
  
  else
      printf("There are no common elements in the two arrays\n");
}       

int ifexists(int arr3[], int k, int v ){
int i;
  if(k == 0)
    return 0;
        
for (i=0; i<= k;i++)
  if (arr3[i]==v) return (1);

return (0);  
}
        
        
    
