/*
//Void function with input argument
#include<stdio.h>
void rbox(double rnum);
void main(){
double num;
printf("Enter the number to be in the box: \n");
scanf("%lf", &num);
printf("The number entered is %f\n", num);
rbox(num);

}


void rbox(double num){
printf("***********\n");
printf("*         *\n");
printf("* %5.2f   *\n", num);
printf("*         *\n");
printf("***********\n");
}
*/

/*
//Void function with input argument
#include<stdio.h>
void rbox(double rnum);
void main(){
double num;
//printf("Enter the number to be in the box: \n");
//scanf("%lf", &num);
//printf("The number entered is %f\n", num);
rbox(8.9);
}
void rbox(double num){
printf("***********\n");
printf("*         *\n");
printf("* %5.2f   *\n", num);
printf("*         *\n");
printf("***********\n");
}*/

/*
//Functions with Input Arguments and a Single Result
#include<stdio.h>
int add(int a, int b);
void main(){
int a, b, c =4;
int sum;
sum= c + add(a, b);
printf("The result sum: %d\n", sum);
}

int add(int a, int b){
a= 2;
b= 3;
 return(a + b);
}

*/


/*
//Function scale
#include<stdio.h>
#include<math.h>
double scale(double x, int n);
int main(){
double num1;
int num2;
printf("Enter a real number: \n");
scanf("%lf", &num1);
printf("Enter an integer: \n");
scanf("%d", &num2);
printf("Result to function scale is %lf: \n", scale(num1, num2));
return 0;
}

double scale(double x, int n){
double scale_factor;
scale_factor= pow(10,n);
return (x * scale_factor);
}

*/



//-----------------Call by value and call by reference----------------------------
/*
#include<stdio.h>
int add(int *a, int *b);
void main(){
int a, b, c =4;
int sum;
sum= c + add(&a, &b);
printf("The result sum: %d\n", sum);
}

int add(int *a, int *b){
*a= 2;
*b= 3;
 return(*a + *b);
}
*/

/*
#include<stdio.h>
int change(int a, int b);
int main()
{
int a = 10, b =20;
printf("Before change a = %d, b = %d\n", a, b);
change(a, b);
printf("After change a = %d, b = %d\n", a, b);
return 0;
}

int change(int a, int b)
{
a = 30;
b= 20;
printf("The value of the formal parameters a= %d, b= %d\n", a, b);
return 0;

}  
*/





#include<stdio.h>
int change(int *a, int *b);
int main()
{
int a = 10, b =20;
printf("Before change a = %d, b = %d\n", a, b);
change(&a, &b);
printf("After change a = %d, b = %d\n", a, b);
return 0;
}

int change(int *a, int *b)
{
*a = 30;
*b= 20;
printf("The value of the formal parameters a= %d, b= %d\n", *a, *b);
return 0;

}  



















































