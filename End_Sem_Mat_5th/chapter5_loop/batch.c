#include<stdio.h>
int main(){
int i, dig, sum = 0;
printf("Digit");
 i = scanf("%d", &dig);
while(i != EOF){
 if(dig>1){ 
 sum = sum + dig;
  }
  i = scanf("%d", &dig);
  printf("The value of EOF is %d", i);
  }
 printf("The sum is: %d", sum); 
return 0;
}  
