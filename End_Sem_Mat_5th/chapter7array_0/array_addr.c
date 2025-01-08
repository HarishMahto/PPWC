//To get the address of consecutive memory locns of the array
/*
#include<stdio.h>
int main(){
int *p;
int i;
int a[5] = {2, 7, 6, 2, 5};

p= &a[0];
printf("p0: %p ", p);
p = p + 1;
printf("p1: %p ", p);
p = p + 1;
printf("p2: %p ", p);

p = p + 1;
printf("p3: %p ", p);
p = p + 1;
printf("p4: %p \n", p);
return 0;
}*/


//---------------OR-----------------------------------
/*
#include<stdio.h>
int main(){
int *p;
int i;
int a[5] = {2, 7, 6, 2, 5};
for(i = 0; i<5; i++){
//p= &a[i];
p = a + i;
printf("p0: %p and value: %d \n", p, a[i]);
}
return 0;
}
*/


// To do a sum of array elems by passing array elements as function arguments-------------------------
#include<stdio.h>
int sumofel(int a[], int size){  //arrays are always passed as reference parameters  int a is same as int *a
int i, sum;                        // In arrays there is no call by values
sum = 0;
for(i = 0; i< size; i++){
sum = sum + a[i];
}
return sum;
}

int main(){
int a[] = {2, 4, 6, 5, 1};
int size, total;
size= sizeof(a)/sizeof(a[0]);
total = sumofel(a, size);   //arrays are always passed as reference parameters i.e a or &a[0]
printf("Sum of elements: %d\n", total);
return 0;
}
