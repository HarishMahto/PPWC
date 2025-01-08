/*

//Reads serial number and displays class of ship
#include<stdio.h>
int main(){
char class;
printf("Enter the serial no. of of ship: \n");
scanf("%c", &class);
printf("The ships class is: %c ", class);

switch(class){
case 'b':
case 'B':
printf("Battleship\n");
break;                     //break is a keyword in C and causes an immediate exit from the switch or loop (for, while or do).
 case 'c':
 case 'C':                   //exit() is a libbrary function, which causes immediate termination of the entire program, forcing a return to the operating system.
printf("Cruiser\n");
break;
  case 'd':
  case 'D':
printf("Destroyer\n");
break;
default:
printf("Unknown\n");  
}
return 0;
}

*/


#include<stdio.h>
int main(){
int i;
printf("Enter the value of case: \n");
scanf("%d", &i);
switch(i){
case 1:
printf("You are first\n");
break;

case 2:
printf("You are second\n");
break;

case 3:
printf("You are third\n");
break;

default:
printf("Invalid case\n");

}

return 0;

}
