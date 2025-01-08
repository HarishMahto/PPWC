#include<stdio.h>
void reverse(int n);
int main(){
 int n;
 printf("Enter the value of n\n");
scanf("%d", &n);
reverse(n);
}

void reverse(int n){

char word[20]; 


if (n <= 1) { 
printf("Enter a word: ");
scanf("%s", word);
printf("%s\n", word);
} else {

printf("Enter a word: "); 
scanf("%s", word);
reverse(n-1);
printf("%s\n", word);
}
}
