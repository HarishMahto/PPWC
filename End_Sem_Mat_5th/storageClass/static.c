
//PROGRAM DEMONSTRATING STATIC STORAGE CLASS---------------
/*
#include<stdio.h>

void main(){
static int i ;
for ( ; i <= 10 ; i++ )
 printf ("\n%d", i ) ;  //by default zero value is assigned in static
 return 0;
}
*/

//LIFE TIME OF STATIC VARIABLE

#include<stdio.h>
void func();
int main(){

  func();
  func();
  func();
return 0;
}

void func(){
static int i =1;  //reinitialization doesnot take place in staic
       i++;                     
       printf("The value of i = %d\n", i);
       }

  

/*
//GUESS THE OUTPUT-------------------------
#include<stdio.h>
void func(void);
static int count = 5; // global variable
int main() {
while(count--) {
func();
}
return 0;
}
// function definition 
void func( void ) {
static int i = 5; // local static variable
i++;
printf("i is %d and count is %d\n", i, count);
}
 */
