/*
#include <stdio.h>
#include <string.h>


int main(void){

char alpha[5][10] = {"daisy", "marigold", "petunia", "rose", "tulip"};
for(int i = 0; i < 5; ++i)
printf("%s\n", alpha[i]);

return 0;
 }

*/

 
 
 
 
 #include <stdio.h>
#include <string.h>


int main(void){

char list[5][10] = {"tulip", "marigold","daisy", "petunia", "rose"};
int first = 0;
for(int i = 1; i <= 4; ++i){
 if (strcmp(list[i], list[first]) < 0)
   first = i;
   }
   printf("%d\n", first);
   return 0;
}
