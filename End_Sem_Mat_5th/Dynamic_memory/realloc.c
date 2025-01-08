//program 1----Demonstrating realloc---------------
/*
#include <stdio.h>
#include <stdlib.h>
int main(){
int* ptr;
 ptr = (int*)malloc(sizeof(int) *2);
int i;
int *ptr_new;
*ptr = 10;
*(ptr + 1) = 20;

ptr_new = (int*)realloc(ptr, sizeof(int) * 3);
*(ptr_new + 2) = 30;
for(i = 0; i < 3; ++i){
   printf("%d\n", *(ptr_new + i)); }
free(ptr_new);
return 0; }

*/


//---Program to concatenate two strings using realloc------
/*
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main () {
   char *str;
   
   str = (char *) malloc(15);//Initial memory allocation 
   strcpy(str, "tutorialspoint");
   printf("String = %s\n", str);

   str = (char *) realloc(str, 25);//Reallocating memory
   strcat(str, ".com");
   printf("String = %s\n", str);

   free(str);
   
   return(0);}
*/



#include <stdio.h>
#include <stdlib.h>
int main() {
int* ptr = (int*)malloc(5 * sizeof(int));
if (ptr == NULL) {
printf("Memory allocation failed\n");
return 1;
}
// Print the values before reallocating
for (int i = 0; i < 5; ++i) {
printf("%d ", ptr[i]);
}
// Resize the memory block to zero bytes (similar to free)
/*
ptr = (int*)realloc(ptr, 0);
if (ptr == NULL) {
printf("Memory reallocation failed\n");
return 1; // Exit with an error code

}
// After reallocating to zero bytes, the pointer is still valid but should not be dereferenced
// Print the values after reallocating
for (int i = 0; i < 5; ++i) {
printf("%d ", ptr[i]);
}
// Free the memory (it’s equivalent to realloc(ptr, 0))
free(ptr);*/
return 0;
}






