
/*
#include<stdio.h>
int main(){
char z= 'a';
printf("The value of a = %d\n", z);
return 0;
}*/


//Demonstrating scanf

/*
#include<stdio.h>
void main(){

int age;
char name, place, cont;
printf("Enter the values for age, name and place\n");
scanf("%d %c %c",&age, &name, &place);


printf("The respective values are: %d %c %c\n",age,name,place);
printf("Enter the next value: ");
scanf("\n%c",&cont);


printf("\nThe con= %c\n", cont);
}
*/



#include<stdio.h>
void main(){

int age, empno, sal, x;

printf("Enter the values for age, empno, sal\n");
x = scanf("%d%d%d",&age, &empno, &sal);


printf("The respective values are: %d %d %d\n",age, empno, sal);
printf("The return value of scanf= %d", x);
}


/*Write a program that stores the value of 'x' and 76.1 in separate memory cells. Your program should get the values as data items and display them again for the user when done.*/
/*
#include<stdio.h>
int main(){
char z;
int z1;
printf("Enter the value of z\n");
scanf("%c", &z);
printf("Enter the value of z1\n");
scanf("%d", &z1);
printf("The value of z = %c\nThe value of z1 = %d\n", z,z1);
return 0;
}*/



/*
//Quick check exercise Question 2
#include<stdio.h>
int main(){
double x = 10.0;
x = x - 20.0;
printf("x = %f\n", x);
}
*/






