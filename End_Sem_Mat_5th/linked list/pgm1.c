#include<stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};


void display(struct node* ptr)

{

while (ptr != NULL) {
//void display(struct node* ptr);
                

printf(" %d ", ptr->data);

ptr = ptr->next;

}

}

int main(){

struct node *head;
struct node *one = NULL;
struct node *two = NULL;
struct node *three = NULL;

/* Allocate memory */
one = malloc(sizeof(struct node));
two = malloc(sizeof(struct node));
three = malloc(sizeof(struct node));

/* Assign data values */
one->data = 1;
two->data = 2;
three->data=3;

/* Connect nodes */
one->next = two;
two->next = three;
three->next = NULL;

/* Save address of first node in head */
head = one;

display(one);

return 0;

}





