/*

#include<stdio.h>
int main(){
int x, y;
printf("Enter the inputs: ");
scanf("%d%d", &x,&y);
if(x-y > 0)
 printf("abs = %d", x - y);
 else
  printf("abs = %d\n", y -x);
  return 0;
  }
 */ 
  
  
  
/*  Write an if statement that might be used to compute and display the aver-
age of a set of n numbers whose sum is stored in variable total . This average
should be found only if n is greater than 0; otherwise, an error message should
be displayed.*/

/*
#include<stdio.h>
int main(){

int n;
double average;
double sum = 456;

printf("Enter the value of n: \n");
scanf("%d", &n);
if(n>0){
  average = sum/n;
  printf("The average is : %lf", average);
  }
else
   printf("Error: The number of elements n shouldbe greater than 0\n"); 
   
return 0;   
   } 

*/


/*Write an interactive program that contains an if statement that may be used
to compute the area of a square ( area  side 2 ) or a circle ( area  p  radius 2 )
after prompting the user to type the first character of the figure name (S or C).*/
/*
#include<stdio.h>
#define pi 3.15
int main(){
char x;
int r, l;
double ar;
printf("Enter the option: \n");
scanf("%c",&x);
 if(x == 's' ){
  printf("Computing area of a Square\n");
  printf("Enter the length of the sides: \n");
  scanf("%d", &l);
  ar = l * l;
  printf("The area of square: %f\n", ar);
  }
  
 else if(x == 'c'){
  printf("Computing area of a Circle\n");
  printf("Enter the radius: \n");
  scanf("%d", &r);
  ar = pi * r * r;
  printf("The area of circle: %f\n", ar);
  }
  
 else
  printf("Invalid entry... \n"); 
  
return 0;
}  
 */   
  


//C Program to Check Whether a character is Vowel or Consonant.
#include <stdio.h>
#include<ctype.h>

int main() {
   char c;
   int lowercase_vowel, uppercase_vowel;
   printf("Enter an alphabet: ");
   scanf("%c", &c);

   
   lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'); // evaluates to 1 if variable c is a lowercase vowel

   
   uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');// evaluates to 1 if variable c is a uppercase vowel

   
   if (!isalpha(c))                                        // Show error message if c is not an alphabet
      printf("Error! Non-alphabetic character.\n");
   else if (lowercase_vowel || uppercase_vowel)
      printf("%c is a vowel.\n", c);
   else
      printf("%c is a consonant.\n", c);

   return 0;
}















