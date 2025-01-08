//Types of functions:
//-------------Function without argument and no return value-------(Prints the name)-------
/*
#include<stdio.h>
void print_name();
void main(){
printf("Hello");
print_name();
}
void print_name(){
printf("  Rohit\n");
}
*/

//----------------program sum---

/*
#include<stdio.h>  
void sum();  
void main()  
{  
    printf("\nGoing to calculate the sum of two numbers:");  
    sum();  
}  
void sum()  
{  
    int a,b;   
    printf("\nEnter two numbers: ");  
    scanf("%d %d",&a,&b);   
    printf("The sum is %d\n",a+b);  
}  

*/

//-------------Function without argument and  return value------
/*
#include<stdio.h>  
int sum();  
void main()  
{ 
    int res; 
    printf("\nGoing to calculate the sum of two numbers:");  
    res = sum(); 
    printf("Result = %d", res); 
}  
int sum()  
{  
    int a,b;   
    printf("\nEnter two numbers: ");  
    scanf("%d %d",&a,&b);   
   return(a+b);  
} 
*/

//----------Example for Function with argument and without return value-----------

/*
#include<stdio.h>  
void sum(int a, int b); 
void main()  
{ 
    int a, b; 
    printf("\nGoing to calculate the sum of two numbers:"); 
    printf("\nEnter two numbers: ");  
    scanf("%d %d",&a,&b);  
    sum(a, b); 
     
}  
void sum(int a, int b)  
{  
int sumof;
    sumof = a+ b;
    printf("The sum of the numbers : %d\n", sumof);
} 
*/

//----------Example for Function with argument and with return value-----------

#include<stdio.h>  
int sum(int a, int b); 
void main()  
{ 
    int a, b, r; 
    printf("\nGoing to calculate the sum of two numbers:"); 
    printf("\nEnter two numbers: ");  
    scanf("%d %d",&a,&b);  
    r = sum(a, b);
    printf("The result is : %d\n", r); 
     
}  
int sum(int a, int b)  
{  
int sumof;
    sumof = a+ b;
    return (sumof);
} 






















 
