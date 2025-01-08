
#include<stdio.h>

typedef struct book {

char name;
int pages;
float price;
}book;
int main(){
book b1, b2, b3 ;

printf("Enter name pages and price of book1\n");
scanf("%c%d%f", &b1.name, &b1.pages, &b1.price);
printf("Enter name pages and price of book2\n");
scanf(" %c%d%f", &b2.name, &b2.pages, &b2.price);
printf("Enter name pages and price of book3\n");
scanf(" %c%d%f", &b3.name, &b3.pages, &b3.price);


printf("\n---------------------\n");

printf("The values entered are: \n");

printf("%c %d %.2f\n", b1.name, b1.pages, b1.price);
printf("%c %d %.2f\n", b2.name, b2.pages, b2.price);
printf("%c %d %.2f\n", b3.name, b3.pages, b3.price);
return 0;
}
