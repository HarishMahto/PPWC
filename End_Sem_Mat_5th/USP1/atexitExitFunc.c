/*
//Program for exit()
#include<stdio.h>
#include<stdlib.h>
int main(){
printf("This is the start of the program\n");
printf("Exiting the program....\n");
exit(0);

printf("This is the end of the program\n");

return 0;
}


//Program for atexit()-----1
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void display()
{
printf("function Exit handler\n");
}
int main(void) {
int i;
if (atexit(display)) {
fprintf(stderr, "Failed to install display exit handler\n");
return 1;
}

for(i=0;i<5;i++){
sleep(1);
printf("%d\n",i);
}
return 0;
}*/



//Program for atexit()-----2
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void functionA()
{
printf("This is functionA\n");
}
int main(void) {
int i;
if (atexit(functionA)){
   fprintf(stderr, "failed");
}
 
   printf("Starting  main program...\n");

   printf("Exiting main program...\n");

   
return 0;
}



//Demonstrating Functions so registered are called in the reverse order of their registration;

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void functionA()
{
printf("This is functionA\n");
}

void functionB()
{
printf("This is functionB\n");
}

void functionC()
{
printf("This is functionC\n");
}
int main(void) {
int i;
atexit(functionC);
atexit(functionB);
atexit(functionA);

 
   printf("Starting  main program...\n");

   printf("Exiting main program...\n");

   
return 0;
}


