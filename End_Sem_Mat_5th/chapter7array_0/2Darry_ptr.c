
//Acessing 2D array through pointers
#include <stdio.h>

void main(){

int s[3][2] = {{6, 7}, {2, 3}, {5, 6}};
for(int i =0; i<3; i++){
  for(int j = 0; j < 2; j++){
   printf("s[%d][%d]: %d\n", i, j, *(s[i] + j)); 
   //printf("s[%d][%d]: %d\n", i, j, *(*(s + i) + j));
}
}
}
