
/*
#include<stdio.h>
#include <string.h>
int main(){
char str[] = "This is a book";
char str1[20];
char *token;
strcpy(str1, str);

printf("String is: %s\n",str1);
token = strtok(str1, " ");
printf("Token1: %s\n",token);
token = strtok(NULL, " ");
printf("Token2: %s\n",token);
token = strtok(NULL, " ");
printf("Token3: %s\n",token);
token = strtok(NULL, " ");
printf("Token4: %s\n",token);
token = strtok(NULL, " ");
printf("Token5: %s\n",token);
return 0;
}*/


/*
#include<stdio.h>
#include <string.h>
int main(){
char str[] = "This is a book";
char str1[20];
char *token;
strcpy(str1, str);

printf("String is: %s\n",str1);
token = strtok(str1, " ");
int i = 1;
while(token){
   
  printf("Token %d: %s\n",i, token);
  token = strtok(NULL, " ");
  i++;
}
return 0;
}
*/


/*
#include<stdio.h>
#include <string.h>
int main(){
char str[] = "This is a book";
char str1[20];
char *token;
strcpy(str1, str);


printf("String is: %s\n",str1);
token = strtok(str1, " ");

while(token){
  
  if(str1[0] == '\0')
    printf("\\0");
  else  
    printf("%s\n",token);
    token = strtok(NULL, " ");
}


for(int i= 0; i<(strlen(str); i++){
if(str1[i]=='\0') 
     printf("\\0\n");
else 
    printf("%c\n", str1[i]);
}

return 0;
}

*/
/*
#include<stdio.h>
#include <string.h>
int main() {
char str[] ="ITER-IBCS-SOA-SUM-ids";
char ptr[] ="iter-ibcs-soa-sum-ids-CSE";
char *token,*ptoken;
token=strtok(str,"-");
ptoken=strtok(ptr,"-");
while (token!=NULL){
printf("Token=%s\n",token);
token=strtok(NULL,"-");
}
return 0; }
*/

/*
#include<stdio.h>
#include <string.h>
int main() {
char str[] ="ITER-IBCS-SOA-SUM-ids";
char ptr[] ="iter-ibcs-soa-sum-ids-CSE";
char *token,*ptoken, *sptr1,*sptr2;
token=strtok_r(str,"-", &sptr1);
ptoken=strtok_r(ptr,"-",&sptr2);
while (token!=NULL){
printf("Token=%s\n",token);
token=strtok_r(NULL,"-", &sptr1);
}

while (ptoken!=NULL){
printf("Token=%s\n",ptoken);
ptoken=strtok_r(NULL,"-", &sptr2);
}


return 0; }

*/



#include<stdio.h>
#include <string.h>
int main() {
char delim[] = " ,";
char str[] ="This,is a book";;

char *token, *sptr1;
//token=strtok_r(str,delim, &sptr1);
token=strtok_r(str, " ,", &sptr1);
while (token!=NULL){
printf("Token=%s\n",token);
//token=strtok_r(NULL,delim, &sptr1);
token=strtok_r(NULL, " ,", &sptr1);
}
return 0;
}







