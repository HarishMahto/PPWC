//Pointers and arrays
/*
#include<stdio.h>

int main(){
int arr[] = {5, 7, 3, 4, 6};
//Displaying arr[2]
printf("arr[2] = %d \n", arr[2]); 

int *j, *k;
j = &arr[2];
printf("address (value of j) = %p, *j = %d \n", j, *j);

 k = (arr + 2) ;
 printf("address (value of k) = %p, *k = %d\n", k, *k);
 
  
return 0;

}

*/


//Passing single array element into a function
/*

#include<stdio.h>
int display(int m);
int main(){
int i, n;
int arr[4] = {2, 4, 6, 1};
for(i = 0; i<4; i++){
display(arr[i]);
}
//printf("%d\n", n);
return 0;
}

int display(int m){
printf("%d\n", m);
return m;
}
*/

/*
//Passing entire array element into a function
#include<stdio.h>
void display(int *m, int n);
int main(){
int i, n =4;
int arr[4] = {2, 4, 6, 1};
 //display(&arr[0], n);
 display(arr, n);
return 0;
}

void display(int *m, int n){
for (int i = 0; i<n; i++){
printf("%d\n", m[i]);
}
}
*/






#include<stdio.h>
#define a_size 5
void printmyarr_ele(int arr_ele, int index);
int main()
{
int arr[a_size], i,sum;
printf("Enter %d numbers separated by blanks or <return>s\n>", a_size);
for (i = 0; i < a_size; i++)
scanf("%d", &arr[i]);
printmyarr_ele(arr[3],3);
/*An array element is just passed as normal variable or
value*/
}
void printmyarr_ele(int val, int index){
printf("At position %d you entered %d \n",index,val);
}

