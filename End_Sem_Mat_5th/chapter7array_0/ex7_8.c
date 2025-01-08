/*
//To get the largest element in an array
#include<stdio.h>
void get_max(const int list[], int n);

int main(){

int n =5;
int list[] ={2, 5, 9, 1, 0};

get_max(list, n);


//printf("The largest element is %d\n", x);



return 0;
}

*/
/*
void get_max(const int list[], int n)
{
int i, cur_large;
/*for (i = 0; i < n; ++i){
scanf("%d", &list[i]);
}
*/
/*
for (i = 0; i < n; ++i){
printf("%d, ", list[i]);
}
cur_large = list[0];

for (i = 1; i < n; ++i){
if (list[i] > cur_large){
cur_large = list[i];
}
}
printf("Largest element present in given array: %d\n", cur_large);    
//return (cur_large);
}*/


//To get the smallest element in an array
#include<stdio.h>
int get_min(const int list[], int n);
int main(){
int n, i, x;
int list[20];
printf("Enter the number of elements to be entered : ");
scanf("%d",&n);
printf("Enter the elements of the Array> \n");
for(i = 0; i< n; i++){
scanf("%d", &list[i]);}

printf("The elements of the Array> \n");
for(i = 0; i< n; i++){
printf("list[i] = %d\n", list[i]);
}
x = get_min(list, n);
printf("\nThe smallest element = %d\n", x);
return 0;

}

int get_min(const int list[], int n){
int curr_small= list[0], i;
for(i = 1; i< n; i++){
if(list[i]<curr_small)
 curr_small = list[i];
 }
 
 return (curr_small);
 
 }













