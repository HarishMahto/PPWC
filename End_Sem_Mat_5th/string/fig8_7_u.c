
#include <stdio.h>
#include<string.h>
#define STRSIZ 30
#define MAXAPP 50
void select_sort_str(char *list[],int n);
void main(void){
char one_char;
int i, num_app;
char applicants[MAXAPP][STRSIZ];

char *alpha[MAXAPP];

printf("Enter number of applicants (0 . . %d)\n> ", MAXAPP);
scanf("%d", &num_app);
do

scanf("%c", &one_char);
while (one_char != '\n');

printf("Enter names of applicants on separate lines\n");
printf("in the order in which they applied\n");
for (i = 0; i < num_app; ++i)
fgets(applicants[i], 30, stdin);



printf("The applicants entered are: \n");

for (i = 0; i < num_app; ++i)
printf("%s", applicants[i]);


for (i = 0; i < num_app; ++i)
alpha[i] = applicants[i]; 

select_sort_str(alpha, num_app);
printf("After sorting:\n");
for (i = 0; i < num_app; ++i)
   printf("%-30s%5c%-30s\n", applicants[i], ' ', alpha[i]);



}


void select_sort_str(char *list[],int n){
int i, j, position;
char *swap;
for(i = 0; i < (n - 1); i++)
{
   position=i;
    for(j = i + 1; j < n; j++)
     {
       if(strcmp(list[position], list[j]) > 0 )
        position=j;
        }
         if(position != i)
          {
           swap = list[i];
           list[i] = list[position];
           list[position] = swap;
           }
}

}


























