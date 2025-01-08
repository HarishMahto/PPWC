//Program to determine the type of character entered
/*
#include<stdio.h>
int main(){
char x;
 printf("Enter the input: \n");
 scanf("%c", &x);
 
 if (x >= 'A' && x<= 'Z')
    printf("The entered character %c is an upper case alphabet .\n", x);
    
 else if (x >= 'a' && x<= 'z')
    printf("The entered character %c is a lower case alphabet.\n", x);
 
 else if (x >= '0' && x<= '9')  
    printf("The entered character %c is a number.\n", x);
 
 else
    printf("The entered character %c is a symbol.\n", x);
 
 return 0;
 }
 */
 
 
 
 
//Program to find the leap year
 
 #include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
        printf("%d is a leap year.\n", year);
    
    else 
        printf("%d is not a leap year.\n", year);
    
    return 0;
}
