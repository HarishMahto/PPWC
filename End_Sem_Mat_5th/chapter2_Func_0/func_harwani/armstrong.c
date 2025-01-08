#include<stdio.h>
#include <math.h>
int find_armstr(int numb);
void push(int);
int pop();
#define max 10

int stack[max];
int top = -1;

int main(){

int numb;
printf("Enter a number: \n");
scanf("%d", &numb);


if(find_armstr(numb))
   printf("The entered number is armstrong number. \n");
 else
   printf("The entered number is not an armstrong number. \n");   
   }
   
   
int  find_armstr(int numb)  {
int rem, count, temp, j;
temp = numb;
     count = 0;
    while(numb > 0){
        rem = numb % 10;
        push(rem);
        count ++;
        numb = numb/10;
        }
        
 numb = temp;
int value = 0;
 while(top >= 0){
   j = pop();
   value = value + pow(j, count);
   }
  
 if(value == numb) 
      return 1;
 else
    return 0;
  }


void push(int m)
{
top++;
stack[top]=m;
} 

int pop(){
int j;
if(top==-1)
    return(top);
else
{
j=stack[top];
top--;
return(j);
}
} 
          
