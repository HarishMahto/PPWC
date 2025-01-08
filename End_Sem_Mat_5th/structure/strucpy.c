#include<stdio.h>
typedef struct{
char name[10];
int age;
}my_struct;

int main(){

my_struct b1 = {"fgh", 34}, b2;
b2 =b1;
printf("The elements in b1 are %s %d: \n", b1.name, b1.age);
printf("The elements in b2 are %s %d: \n", b2.name, b2.age);

}
