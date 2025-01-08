//INITIAL VALUE OF AUTO VARIABLE
/*
#include<stdio.h>
void main(){
auto int i;
i = i * 1;
printf("The value of i: %d", i); //value is unpredictable or garbage
}
*/


//LIFE TIME OF AUTO VARIABLE

#include<stdio.h>
void func();
int main(){
  func();
  func();
  func();
return 0;
}

void func(){
 auto int i =1;  //reinitialization takes place in auto
        i++;                     
       printf("The value of i = %d\n", i);
       }

