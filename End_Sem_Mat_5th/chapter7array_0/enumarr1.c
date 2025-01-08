/*
#include<stdio.h>
 
enum year{Jan, Feb, Mar, Apr, May, Jun, Jul, 
          Aug, Sep, Oct, Nov, Dec};
 
int main()
{
   int i;
   for (i=Jan; i<=Dec; i++)      
      printf("%d ", i);
       
   return 0;
}
*/




#include<stdio.h>
#include <stdlib.h>
enum expense_t{entertainment, rent, utilities, food, clothing,
automobile, insurance, miscellaneous};


int main (void){
char input[80];
  enum expense_t expense_kind;
  printf("Enter expense kind: \n");
  scanf("%d", &expense_kind);
 
  printf("%d\n", expense_kind);
 // printf("Expense code represents ");
 
 // printf("%d", rent);
  printf(".\n");
return (0);
}
