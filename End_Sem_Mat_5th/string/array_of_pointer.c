
#include <stdio.h>
#include<string.h>
#define STRSIZ 30
#define MAXAPP 50




int main() 
{ 
    // Declaring a pointer to store address 
    // pointing to an array of size 3 
    int(*p)[3]; 
  
    // Define an array of size 3 
    int a[3] = { 1, 2, 3 }; 
  
    // Store the base address of the 
    // array in the pointer variable 
    p = &a; 
  
    // Print the results 
    for (int i = 0; i < 3; i++) { 
        printf("%d ", *(*(p) + i)); 
    } 
    
    
    printf("\n");
    printf("Array of pointers: \n");
    
    int *q[3];
    int z = 1, b = 2, c = 3;
    q[0] = &z;
    q[1] = &b;
    q[2] = &c;
    
  for (int i = 0; i < 3; i++) { 
        printf("%d ", *q[i]); 
    } 
    
    printf("\n");
    return 0; 

}


















/* 
#include <stdio.h>
#include <string.h>
#define STRLEN 10
 
void main()
{

    char *s1 = "Jan, 30 1996";
    
    s1[1]  = 'b';
   printf("s1[1]: %c\n", s1[1]);
    }
    
  
    

    #include <stdio.h>
#include <string.h>
#define STRLEN 10
 
void main()
{
char res1[10];
char res2[10];
char res3[10];
    char *s1 = "Jan, 30 1996";
    
    
   strncpy(res1, s1, 4);
   res1[4] = '\0';
   
   strncpy(res2, &s1[5], 2);
   res2[2] = '\0';
   
  strncpy(res3, &s1[8], 4);
  res3[4] = '\0';
    printf("res1: %s\n res2: %s\n res3: %s\n", res1, res2, res3);
    }
 */    
   
