/*
//Creation of nodes and assigning values
#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node* next;
};

int main(){
struct Node *first = (struct Node *)malloc(sizeof(struct Node)) ;
first->data = 10;
struct Node *second = (struct Node *)malloc(sizeof(struct Node)) ;
second->data = 20;
struct Node *third = (struct Node *)malloc(sizeof(struct Node)) ;
third->data = 30;

first->next = second;
second->next = third;
third->next = NULL;
printf("Linked List\n");

struct Node * temp = first;
while(temp){

printf("%d\n",temp->data );
 temp = temp->next;
 }
return 0;
}
*/


/*
//Creation of node and Function
#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node* next;
};

struct Node* cre_node(int data){

struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
new_node->data = data;
new_node->next = NULL;
return new_node;
}

int main(){
struct Node *first = cre_node(10) ;
first->next = cre_node(20) ;
first->next->next = cre_node(30) ;
printf("Linked List\n");

struct Node * temp = first;
while(temp){
printf("%d\n",temp->data );
 temp = temp->next;
 }
return 0;}
*/




//Inserting at the begining
/*
#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node* next;
};

struct Node* cre_node(int data){

struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
new_node->data = data;
new_node->next = NULL;
return new_node;
}
void push_beg(struct Node** head, int new_data){
struct Node* new_node = cre_node(new_data);
new_node->next  = *head;
*head= new_node;
}
int main(){
struct Node *first = cre_node(10) ;
first->next = cre_node(20) ;
first->next->next = cre_node(30) ;
printf("Linked List\n");

struct Node * temp = first;
while(temp){
printf("%d\n",temp->data );
 temp = temp->next;
 }
 
struct Node* head; 
push_beg(&first, 7);


printf("After inserting at the begining \n");

temp = first;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
 
return 0;
}

*/

//Inserting at the end
/*
#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node* next;
};

struct Node* cre_node(int data){

struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
new_node->data = data;
new_node->next = NULL;
return new_node;
}

void push_beg(struct Node** head, int new_data){
struct Node* new_node = cre_node(new_data);
new_node->next  = *head;
*head= new_node;
}
void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = cre_node(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

int main(){
struct Node *first = cre_node(10) ;
first->next = cre_node(20) ;
first->next->next = cre_node(30) ;
printf("Linked List\n");

struct Node * temp = first;
while(temp){

printf("%d\n",temp->data );
 temp = temp->next;
 }
 

push_beg(&first, 7);
printf("After insertion at the begining\n");
temp = first;
while(temp){
printf("%d -> ",temp->data );
 temp = temp->next;
 }
printf("NULL\n");
 
insertAtEnd(&first, 40);

printf("After inserting at end\n");

temp = first;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
return 0;
}
*/



//Insert at certain position
#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node* next;
};

struct Node* cre_node(int data){

struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
new_node->data = data;
new_node->next = NULL;
return new_node;
}

void push(struct Node** head, int new_data){
struct Node* new_node = cre_node(new_data);
new_node->next  = *head;
*head= new_node;
}
void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = cre_node(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}


void insertAfter(struct Node* prev_node, int new_data)
{
   
    if (prev_node == NULL)//Check if the given prev_node is NULL 
    {
      printf("the given previous node cannot be NULL");
      return;
    }
 
   struct Node* new_node = cre_node(new_data);  //Allocate new node 
   new_node->next = prev_node->next; // Put in the data  
   prev_node->next = new_node;       //new_node->data  = new_data;  Make next of new node as next of prev_node 
 }                                   //  Move the next of prev_node as new_node 
   
int main(){
struct Node *first = cre_node(10) ;
first->next = cre_node(20) ;
first->next->next = cre_node(30) ;
printf("Linked List\n");

struct Node * temp = first;
while(temp){

printf("%d\n",temp->data );
 temp = temp->next;
 }
printf("NULL\n");
   
insertAfter(first->next, 8); 

printf("After insertion at position\n");

temp = first;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
 
 
 
return 0;
}

*/





/*

//Deletion operation

#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node* next;
};

struct Node* cre_node(int data){

struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
new_node->data = data;
new_node->next = NULL;
return new_node;
}

void push(struct Node** head, int new_data){
struct Node* new_node = cre_node(new_data);
new_node->next  = *head;
*head= new_node;
}
void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = cre_node(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}




void insertAfter(struct Node* prev_node, 
                 int new_data)
{
    // 1. Check if the given prev_node is NULL 
    if (prev_node == NULL)
    {
      printf("the given previous node cannot be NULL");
      return;
    }
 
    // 2. Allocate new node 
    struct Node* new_node = cre_node(new_data);
           
 
    // 3. Put in the data  
    //new_node->data  = new_data;
 
    // 4. Make next of new node as next 
    //    of prev_node 
    new_node->next = prev_node->next;
 
    // 5. Move the next of prev_node 
    //    as new_node 
    prev_node->next = new_node;
}



void deleteNode(struct Node** head, int key) {
    struct Node *temp = *head, *prev = NULL;

    // If the head node holds the key
    if (temp != NULL && temp->data == key) {
        *head = temp->next;
        free(temp);
        return;
    }

    // Search for the key
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // If the key was not found
    if (temp == NULL) {
        printf("Key not found\n");
        return;
    }

    // Unlink the node
    prev->next = temp->next;
    free(temp);
}




void PrintFunc(struct Node *head){
struct Node * temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
 
 }

int main(){
struct Node *first = cre_node(10) ;
first->next = cre_node(20) ;
first->next->next = cre_node(30) ;

printf("Linked List\n");
PrintFunc(first);
   
insertAfter(first->next, 8); 

printf("After insertion at position\n");
PrintFunc(first);

deleteNode(&first, 30);
printf("After deletion\n");
PrintFunc(first);
 
return 0;
}
*/


