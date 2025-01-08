//Change Function: To change the value of two variables.
/*
#include<stdio.h>
void change(int x, int y);
int main(){
int x, y;
x = 10;
y = 20;
change(x, y);
printf("x = %d  y = %d\n", x, y);
return 0;
}

void change(int x, int y){

x =30;
y = 25;
printf("x = %d  y = %d\n", x, y);
}

*/



//------------------------------Program to add-------------------

/*
#include<stdio.h>
int sum(int, int);
int main(){
int res = sum(2, 3);
printf("Sum =%d\n", res);
return 0;
}

int sum(int a, int b)
{
int add = a + b;
return add;
}
*/


//----------------------------------------------------------------
//----------------Program to find the 3rd side of a triangle---------------
/*
#include<stdio.h>
#include<math.h>
#define PIE 3.142
double third_side(int x, int y, int alpha);
int main(){
int first, second;
double alpha;

printf("Enter the values of the two sides and the angle: \n");
scanf("%d%d%lf", &first, &second, &alpha);

double third = third_side(first, second, alpha);

printf("The third side of the triangle = %.3f", third);

}

double third_side(int x, int y, int alpha){
double third_1 = sqrt(pow(x, 2) + pow(y, 2) - 2 * x * y * cos(alpha * PIE/180));   // convert degrees to radians
return third_1;
}
*/



//---------------------------Program for Fibonacci series-------------------------

/*
#include<stdio.h>  
  
void fibonacciSeries(int);  
  
int main()  
{  
    int n;  
    printf("How many number of series? :\n");  
    scanf("%d", &n);  
    fibonacciSeries(n);  
    return 0;  
}  
  
void fibonacciSeries(int num)  
{  
    int n1 = 0, n2 = 1, n3, count;  
  
    printf("\nFibonacci Series: \n");  
    printf("1. %d\n2. %d\n", n1, n2);  
  
    for(count = 3; count <= num; count++)  
    {  
        n3 = n1 + n2;  
        printf("%d. %d\n", count, n3);  
        n1 = n2;  
        n2 = n3;  
    }  
} 
*/




//------Program to add a sequence of numbers-----------------------------
#include<stdio.h>
void add(int n);
int main(){
int n;
printf("Enter the value of n: \n");
scanf("%d", &n);
add(n);
}
 void add(int n){
 int ans = 0;
    for(int i = 1; i<= n; i++ ){
      ans = ans + i;
      }  
      
  printf("Answer is %d \n", ans);    
  }
 

















 









