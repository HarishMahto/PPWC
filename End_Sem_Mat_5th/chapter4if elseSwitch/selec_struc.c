/*
//Q: w is either equal to 6 or not greater than 3 .
     //Solution:  w = 6 || !(w > 3) 

#include<stdio.h>
int main(){ 
int w;
scanf("%d", &w); 
if(w == 6 || !(w > 3) ){
   printf("Correct\n");
   return 0;
    }
 printf("Not Correct\n");  
  }
*/  
  
/*  
//Print if password 1234 is valid
#include<stdio.h>
int main(){
int a;
printf("Enter a password : ");
scanf("%d",&a);
if(a == 1234)
{
printf("Your password is valid\n");
}
return 0;
}*/



//If item is nonzero, then multiply product by item and save the result in product ; otherwise, skip   the   multiplication. In either case, print the value of product .
#include<stdio.h>
int main(){
int item, prod = 1;
scanf("%d", &item);
if(item != 0){
  prod = item * prod;
   printf("Product = %d\n", prod);
   //return 0;
  }
 else{
    printf("Product = %d\n", prod);
    }
   } 
  
   
   
// Store the absolute difference of x and y in y, where the absolute difference is(x − y)) or (y − x))  
/*
#include<stdio.h>
int main(){
int x, y;
printf("Enter the inputs: ");
scanf("%d%d", &x,&y);
if(x > y){
   y = x - y;
 printf("y = %d", y);}
 else{
   y = y -x;
  printf("y = %d\n", y);
  return 0;}
  }
  
 */
  
/*  
#include<stdio.h>
int main(){
float mark; char grade;
printf("enter the total mark obtained by student (max 100): ");
scanf("%f",&mark);
if(mark > 100){
printf("wrong mark ....\n");
return 0;
}
else if(mark>90)
grade = 'O';
else if(mark>80)
grade = 'A';
else if(mark>70)
grade = 'B';
else if(mark>60)
grade = 'C';
else if(mark>50)
grade = 'D';
else
grade = 'F';
printf("The student has obtained %c grade in exam\n", grade);
return 0;} 
*/



 
