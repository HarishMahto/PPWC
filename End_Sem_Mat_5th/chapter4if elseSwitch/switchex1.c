/*#include <stdio.h>
int main(){
char class;
printf("Enter the class:");
scanf("%c", &class);

switch(class){
case 'a':
case 'A':
printf("the class of the car is Aristrocrat\n");
break;

case 'b':
case 'B':
printf("Battleship\n");
break;

case 'c':
case 'C':
printf("Cruizer\n");
break;
 default:
 printf("unknown\n");
}
return 0;


}*/

#include <stdio.h>
int main(){
char opt;
printf("Enter the option:");
scanf("%c", &opt);

switch(opt){
case 's':
ac = area_c();
printf("Area of circle is %f\n", ac);
break;
default:
printf("unknown\n");

