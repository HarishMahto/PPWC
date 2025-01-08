//-------------Program for fibonacci series----------------------
/*
#include<stdio.h>

void fibonacciSeries(int n);
int main(){
    int n;
    printf("How many number of series? : ");
    scanf("%d",&n);
    printf("Fibonacci Series: ");
    printf("%d %d ",0,1);
    //Call Function
    fibonacciSeries(n-2);
  return 0;
 }
 
 void fibonacciSeries(int n){
 
 
    static int n1=0,n2=1,n3;
    if(n>0){
         n3 = n1 + n2;
         n1 = n2;
         n2 = n3;
         printf("%d ",n3);
         fibonacciSeries(n-1);
    }
}

*/





//Program to print  first 50 natural numbers 
#include<stdio.h>
int  numPrint(int);
int main()
{
    int n = 1;
	printf("\n\n Recursion : print first 50 natural numbers :\n");
	printf("-------------------------------------------------\n"); 
	printf(" The natural numbers are :");
    numPrint(n);
    printf("\n\n");
    return 0;
}
int numPrint(int n)
{
    if(n<=50)
    {
         printf(" %d ",n);
         numPrint(n+1);
    }
}




/*
#include<stdio.h>
 
int sumOfRange(int);
 
int main() 
{
   int n1;
   int sum;
	printf("\n\n Recursion : calculate the sum of numbers from 1 to n :\n");
	printf("-----------------------------------------------------------\n");    
 
   printf(" Input the last number of the range starting from 1 : ");
   scanf("%d", &n1);
 
   sum = sumOfRange(n1); 
   printf("\n The sum of numbers from 1 to %d : %d\n\n", n1, sum);
 
   return (0);
}
 
int sumOfRange(int n1) 
{
   int res;
   if (n1 == 1) 
   {
      return (1);
   } else 
   {
      res = n1 + sumOfRange(n1 - 1); //calling the function sumOfRange itself
   }
   return (res);
}
*/



/*
#include<stdio.h>
 
int term;
int fibonacci(int prNo, int num);
 
void main() 
{
   static int prNo = 0, num = 1;
	printf("\n\n Recursion : Print Fibonacci Series :\n");
	printf("-----------------------------------------\n");   
 
   printf(" Input number of terms for the Series (< 20) : ");
   scanf("%d", &term);
 printf(" The Series are :\n"); 
   printf(" 1  ");
   fibonacci(prNo, num);
    printf("\n\n");
}
 
int fibonacci(int prNo, int num) 
{
   static int i = 1;
   int nxtNo;
 
   if (i == term)
      return (0);
   else 
   {
      nxtNo = prNo + num;
      prNo = num;
      num = nxtNo;
      printf("%d  ", nxtNo);
 
      i++;
      fibonacci(prNo, num); //recursion, calling the function fibonacci itself
   }
   return (0);
}

*/






/*
#include <stdio.h>
#define MAX 100

void ArrayElement(int arr1[], int st, int l);
 
int main()
{
    int arr1[MAX];
    int n, i;
	printf("\n\n Recursion : Print the array elements :\n");
	printf("-------------------------------------------\n");
	
	printf(" Input the number of elements to be stored in the array :");
    scanf("%d",&n);
   
    printf(" Input %d elements in the array :\n",n);
    for(i=0;i<n;i++)
        {
	      printf(" element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }
     
    printf(" The elements in the array are : ");
    ArrayElement(arr1, 0, n);//call the function ArrayElement
    printf("\n\n"); 
    return 0;
}

void ArrayElement(int arr1[], int st, int l)
{
    if(st >= l)
        return;
         
    //Prints the current array element
    printf("%d  ", arr1[st]);
     
    
    ArrayElement(arr1, st+1, l);//calling the function  ArrayElement itself
}


*/




/*

//---------------Program to count the digits of a given number---------------------

#include<stdio.h>

int noOfDigits(int n1);
int main()
{
  int n1,ctr;
    printf("\n\n count the digits of a given number :\n");
	printf("-----------------------------------------\n");
    printf(" Input  a number : ");
    scanf("%d",&n1);

    ctr = noOfDigits(n1);

    printf(" The number of digits in the number is :  %d \n\n",ctr);
    return 0;
}

int noOfDigits(int n1)
{
    static int ctr=0;

     if(n1!=0)
     {
          ctr++;
         noOfDigits(n1/10);
    }

    return ctr;
}

*/
