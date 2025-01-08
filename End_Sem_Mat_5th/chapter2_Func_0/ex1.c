#include<stdio.h>
void instruct(void);
int swap(int *a, int *b);
int main(){
int a, b;
instruct();

printf("Enter the value of a : \n");
scanf("%d", &a);
printf("Enter the value of b : \n");
scanf("%d", &b);

printf("Before swap the value of two numbers is a = %d and b= %d\n", a, b);

swap(&a, &b);
printf("After swap the value of two numbers is a = %d and b= %d\n", a, b);
return 0;
}

void instruct(){
printf("Program demonstrating pythogoras theorem\n");

}

int swap(int *a, int *b){
int temp;


temp = *a;
*a = *b;
*b = temp;
printf("The value of a and b are %d %d\n", *a,*b);


}
