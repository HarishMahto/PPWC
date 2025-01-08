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
