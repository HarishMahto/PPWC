/*

#include<stdio.h>


void fill_array (int list[], int n, int in_value); 
void main(){
int n =5, in_value =2;
int list[n];
fill_array (list, n, in_value);

for(int i = 0; i < n; ++i){
printf("The value of list[%d]= %d\n", i, list[i]);
}

}

void fill_array (int list[], int n, int in_value)
{
int i;
for(i = 0; i < n; ++i){
list[i] = in_value;
}
}

*/

//Program using pointers----------------------
/*   
#include<stdio.h>


//void fill_array (int list[], int n, int in_value); 
void fill_array (int *j, int n, int in_value); 
void main(){
int n =5, in_value =2;
int list[n];

//fill_array (&list[0], n, in_value);
fill_array (list, n, in_value);
for(int i = 0; i < n; ++i){
printf("The value of list[%d]= %d\n", i, list[i]);
}

}


void fill_array (int *j, int n, int in_value)  
{
int i;
for(i = 0; i < n; ++i){

*j = in_value;
j++;
}
}
*/















