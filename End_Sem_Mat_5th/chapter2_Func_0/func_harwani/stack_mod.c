#include<stdio.h>
char pop(char stack[], int *top);
void push(char stack[], int *top, int m, char item);
#define MAX 20
int main(){
char stack[MAX], item;
int i, j, top = -1;
char sent = 'x';
for(j = 1; j < MAX-1; j++){
   printf("Enter the element to be pushed ( x to stop):\n");
   scanf(" %c", &item);
   if(item == sent){
      break;}
     push(stack, &top, MAX, item);
}

printf("The stack elements are: \n");
for(i = 0; i<= top; i++){
     printf("%c ", stack[i]); //Printing the stack element
     }
     printf("\n");



for(j = top; j> -1; j--){ //printing the popped out element
 printf("The vaue popped: %c\n", pop(stack, &top));
     }
 }
     
void push(char stack[], int *top, int m,  char item){
  if(*top < m-1){
   ++(*top);
   stack[*top] = item;
   }
   }
   
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
  
