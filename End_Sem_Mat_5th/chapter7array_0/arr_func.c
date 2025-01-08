
//passing an array element to a function 
/*
#include<stdio.h>
void disp(int m);
int main(){
int n;
int arr[] = {3, 5, 6, 6, 8};

disp(arr[0]);
}

void disp(int m){

   printf("The 0th element is %d ", m);
   
   printf("\n");
   }
*/   
   
   
/*   
#include<stdio.h>
void disp(int m);
int main(){
int n, i;
int arr[] = {3, 5, 6, 6, 8};
n = sizeof(arr)/sizeof(arr[0]);
for(i = 0; i< n; i++){
disp(arr[i]);
}
printf("\n");
}

void disp(int m){

   printf("%d  ", m);
   }
*/





/*
//passing an entire array to a function without using pointer

#include<stdio.h>
void disp(int arr[], int m);
int main(){
int n;
int arr[] = {3, 5, 6, 6, 8};
n = sizeof(arr)/sizeof(arr[0]);
printf("%d\n", n);
disp(arr, n);
}

void disp(int arr[], int m){
int i;
 for(i = 0; i<m; i++){
   printf("%d ", arr[i]);
   }
   printf("\n");
   }
   */
   
   
//passing an entire array to a function using pointer   
   
#include<stdio.h>
void disp(int *arr, int m);
int main(){
int n;
int arr[] = {3, 5, 6, 6, 8};
n = sizeof(arr)/sizeof(arr[0]);
printf("%d\n", n);
disp(&arr[0], n);
}

void disp(int *arr, int m){
int i;
 for(i = 0; i<m; i++){
   //printf("%d ", arr[i]);
   printf("%d ", *(arr + i));
   }
   printf("\n");
   }
      
   
   
   
