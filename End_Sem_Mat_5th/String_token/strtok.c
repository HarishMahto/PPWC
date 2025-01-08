/*
#include<stdio.h>
#include<string.h>
int main(){

char *last, *first, *middle; 
char pres[20] = "Adams, John Quincy"; 
char pres_copy[20]; 
strcpy(pres_copy, pres);
last = strtok(pres_copy, ", "); 
first = strtok(NULL, ", "); 
middle = strtok(NULL, ", ");  
printf("%s\n%s\n%s\n", first, middle, last);

return 0;
}*/


/*
#include<stdio.h>
#include<string.h>
void main(){
char s[] = "This, is, a, book";
char *token;
token= strtok(s, ",");
while(token!=NULL){
printf("%s\n", token);
token= strtok(NULL, ",");
}
}*/



#include<stdio.h>
#include<string.h>
void main(){
char s[] = "This, is, a, book";
char *token;
token= strtok(s, ",");
printf("%p\n", token);
printf("s[] %p\n", s);
while(token!=NULL){
printf("%s\n", token);
token= strtok(NULL, ",");
}

for(int i= 0; i<17; i++){
if(s[i]=='\0') 
     printf("\\0\n");
else 
    printf("%c\n", s[i]);
}
}
