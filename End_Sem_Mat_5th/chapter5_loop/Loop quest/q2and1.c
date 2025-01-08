//Quest:1 1. Process a data file of Celsius temperatures. Count how many are above 100 ◦ C.

#include<stdio.h>
int main(){
int i, count =0, tempr;
 printf("Reading data file\n");
i = scanf("%d", &tempr);
while(i != EOF){
 if(tempr >=100){
   count = count +1;
   printf("temprature = %d  count = %d\n", tempr, count);
   }
 i = scanf("%d", &tempr);  
 }
 printf("Final count = %d\n", count);
 return 0;
 }
   
   






//-------Question 2------------------------------
/*
#include<stdio.h>
#include<math.h>

int main(){
int i = 0;
while(i<7){
printf("%d\t %d\n", i, (int)pow(2,i));
//printf("%d\t %d\n", i, 2**i);
i = i+1;
}
return 0;
}
*/
