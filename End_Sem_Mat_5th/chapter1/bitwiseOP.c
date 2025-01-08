//Left shift (<<) and right shift (>>) operator in c

/*
#include<stdio.h>
int main(){
 int a = 1, b = 2;
    a = a >> 1;  //right shift
    printf(" Value of a after rigt shift is %d\n", a);
    
    b = b<<1;
    printf(" Value of b after left shift is %d\n", b);
 return 0;
 }   
 */
 
 
 
//Logical operator and bitwisw operator 
/*
#include<stdio.h>
int main()
{
    int x = 3;  //...0011
    int y = 7;  //...0111
 
    // A typical use of '&&'
    if (y > 1 && y > x)
      printf("y is greater than 1 AND x\n");
 
    // A typical use of '&'
    int z = x & y;   // 0011
    
    printf ("z = %d\n", z);
 
    return 0;} */



#include<stdio.h>
int main()
{
    int x = 0;
 
    // 'Geeks in &&' is NOT 
    // printed because x is 0
    printf("%d\n", (x && printf("Geeks in && ")));
 
    // 'Geeks in &' is  printed
    printf("%d\n", (x & printf("Geeks in & ")));
 return 0;}
