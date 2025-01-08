#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 30
void main (){
char *str;
str = (char *) malloc(SIZE * sizeof(char));
printf("Enter name: ");
fgets(str, SIZE, stdin);
printf("%s\n", str);
free(str);
}












//Question 2--------------------
/*

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *num, sum = 0;

    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

   
    num = (int *)calloc(n, sizeof(int));

    // Check if memory allocation was successful
    if (num == NULL) {
        printf("Memory allocation failed.\n");
        exit(0); 
    }

   else{
      printf("Memory allocated successfully\n");
      printf("Enter %d numbers:\n", n);
      for (int i = 0; i < n; i++) {
        scanf("%d", num + i);
        sum += *(num + i);
        }
        }
      printf("Sum = %d\n", sum); 
      free(num) ;
      return 0;
    }
 */   
    
    
//Question 3------------------
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
    char *str_buffer = NULL;
    
    str_buffer = malloc(8);// Initial memory allocation 
    strcpy(str_buffer, "SOA");
    printf("str_buffer = %s\n", str_buffer);
    
    str_buffer = realloc(str_buffer, 15);//Reallocating memory
    strcat(str_buffer, " University");
    printf("str_buffer = %s\n", str_buffer);
    free(str_buffer);
    return 0;
}
*/
