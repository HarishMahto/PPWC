#include<stdio.h>
#define NUM_PEOPLE 30
#define NAME_LEN 25

int main()

{
char name[NUM_PEOPLE][NAME_LEN] = {"Andrew", "Henna", "Reema"};

printf("the last element %s\n", name[2]);
  return 0;

}

/*
#include<stdio.h>
#define LEN 10
int main(){
char dept[LEN];
char course[LEN];
int dept_no;
int time;

printf("Enter the course name, time, department and dept no. \n");

scanf("%s%d%s%d", course, &time, dept, &dept_no);
printf("The course %s meets at %d time to the dept %s with the number %d\n",course, time, dept, dept_no );

}*/



/*
#include<stdio.h>
#define N_LEN 10
#define NUM_PEOPLE 5
int main(){
int age[N_LEN];
int i;
char name_p[NUM_PEOPLE][N_LEN];
for(i =0; i< NUM_PEOPLE; ++i){
printf("Enter the name and age of people \n");
scanf("%s%d",name_p[i], &age[i] );

}
for(i =0; i< NUM_PEOPLE; ++i){

printf("%s  %d",name_p[i], age[i] );
printf("\n");

}
}*/



/*
#include<stdio.h>
#include<stdlib.h>
#define LEN 20
int main(){
int i;
char w[i][LEN];
//char w1[20] = {"fractal"}, w2[20] = {"starts"}, w3[20] = {"with"}, w4[20] = {"the"}, w5[20] = {"letter"}, w6[20] ={"f"};
for(i = 0; i< 6; i++){
printf("Enter the words: \n");
scanf("%s", w[i]);
//if(w[LEN] != "9"){
//printf("%s ", w[i]);
//
}



for(i = 0; i< 6; i++){
printf("%s ", w[i]);
}
}
*/



/*----String concatination----------------------------------*/
/*#include<stdio.h>
#include <string.h>
int main(){
//char ch[20]={'O', 'S', 'W', '\0'};
char ch[20] = {"OSW"};
char ch1[10]={'C', 'L', 'A', 'S', 'S', '\0'};
strcat(ch,ch1);
printf("Value of first string is: %s\n",ch);
return 0;
}*/




/*String compare-----------------------------------------------------------*/
/*
#include<stdio.h>
#include <string.h>
int main(){
char str1[20],str2[20];
printf("Enter 1st string: ");
scanf("%s", str1);//reads string from console
printf("Enter 2nd string: ");
scanf("%s", str2);
if(strcmp(str1,str2)==0)
printf("Strings are equal");
else
printf("Strings are not equal");
return 0;
}
*/



/*String copy--------------------------------------------------*/
/*
#include<stdio.h>
#include <string.h>
#include<stdlib.h>
int main(){
//char ch[20]={'O', 'S', 'W', '\0'};
system("clear"); 
char ch[20]={"OSW"};
char ch1[20];
char ch2[5];
char ch4[5];
strcpy(ch1,ch);
printf("Value of second string is: %s\n",ch1);



strncpy(ch, "This is not good", 5);
printf("Value of mod third string is: %s\n",ch);

strncpy(ch4, "samariton", 3);
ch4[3] = '\0';
printf("Value of 4th string is %s\n", ch4);
   
return 0;
}*/



/*strncpy-------------------to copy an element from the middle----------*/
/*
#include<stdio.h>
#include <string.h>
int main(){
char src[20] = "Jan. 30, 1996";
char res[10];
printf("The src array contains %s\n", src);
strncpy(res, &src[5], 2);
res[2]='\0';
printf("The value in res[] is %s\n", res);


strcpy(res, &src[9]); // To copy the last elements of the source array
printf("The value in res[] is %s\n", res);
return 0;
}
*/















