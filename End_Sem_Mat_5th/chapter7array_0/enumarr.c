//Enumerated array
#include<stdio.h>
enum expense_t{entertainment, rent, utilities, food, clothing,
automobile, insurance, miscellaneous};

void print_expense(enum expense_t expense_kind);
int main (void){
  enum expense_t expense_kind;
  
  printf("Enter the expense code: \n");
  scanf("%u", &expense_kind);
  printf("Expense code represents ");
  print_expense(expense_kind);
  printf(".\n");
return (0);
}
void print_expense(enum expense_t expense_kind){

 switch(expense_kind){
    case entertainment:
    printf("entertainment");
    break;
   
    case rent:
    printf("rent");
    break;
   
   case utilities:
   printf("utilities");
   break;
   
  case food:
  printf("food");
  break;

  case clothing:
  printf("clothing");
  break;
  
  case automobile:
  printf("automobile");
  break;
   
 case insurance:
  printf("insurance");
  break;
 
 case miscellaneous:
  printf("miscellaneous");
  break;

  default:
  printf("\n*** INVALID CODE ***\n");
 }
    }
    
    
    
    
    
    
    
    
    
    
