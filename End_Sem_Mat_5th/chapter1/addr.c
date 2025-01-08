#include<stdio.h>

int main(){
int i;
int *j;
j = &i;
printf("Enter the value of i");
scanf("%d", &i);

printf("The address of i= %p\n", &i);
printf("The address of i= %p\n", j);
printf("The value of i= %d\n", *j);
getchar();
}
