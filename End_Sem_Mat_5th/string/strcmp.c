/*#include<stdio.h>
#include<string.h>
void main(){
char str1[10];
char str2[12];
printf("Enter str1\n");
scanf("%s", str1);
printf("Enter str2\n");
scanf("%s", str2);
int x= strcmp(str1, str2);

printf("The value returned is: %d\n", x);
}*/



#include<stdio.h>
#include<string.h>
#define SENT "quit"
void main(){
char word[15];
printf("Enter list of words on as many lines as you like.\n");
printf("Separate words by at least one blank.\n");
printf("When done, enter %s to quit.\n", SENT);
for (scanf("%s", word);strcmp(word, SENT) != 0; scanf("%s", word)) {

printf("The word is %s\n", word);

}
}
