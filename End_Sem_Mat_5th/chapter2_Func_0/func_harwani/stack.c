#include<stdio.h>
char pop(char stack[], int *top);
void push(char stack[], char item, int *top, int max);
#define max 20
int main(){
   //int max = 20;
   char stack[max];
   int top = -1, i, j;
   push(stack, '2', &top, max);
   push(stack, '+', &top, max);
   push(stack, 'c', &top, max);
   
   
   for(i = 0; i<= top; i++){
     printf("%c ", stack[i]); //Printing the stack element
     }
     printf("\n");
  
   
for(j = top; j> -1; j--){ //printing the popped out element
 printf("The vaue popped: %c\n", pop(stack, &top));
     }
 }
 
 
   
//Push operation  
void push(char stack[], char item, int *top, int m){
  
     if(*top < m-1){
          ++(*top);
         stack[*top] = item;
         }
}
   
//pop operation
char pop(char stack[], int *top){ 
char item;
 

if (*top >= 0) {
item = stack[*top];
--(*top);
} 
 else{
    printf("Stack is empty");
    }
    
    return (item);
    
    }
 
 
