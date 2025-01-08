/*
#include <stdio.h>
#include<string.h>
void main(void)
{
int i, index_of_min =4, fill=0;
char *list[5] = {"daisy", "marigold", "petunia", "rose", "tulip"};
//char list[30];
//char temp[10];

for (i = 0; i < 5; ++i)
printf("%s\n", list[i]);



int first, j;

first = 0;
for (i =  1; i <= 4; ++i)
if (strcmp(list[i], list[first]) < 0)
first = i;

printf("first: %d\n", first);

}



int fill, index_of_min ;
char *temp;
for(fill = 0; fill < 4; ++fill) {
index_of_min = first;
if (index_of_min != fill) {
temp = list[index_of_min];
list[index_of_min] = list[fill];
list[fill] = temp;
}
}

printf("%s\n", list);



/*
strcpy(temp, list[ind_min]);
strcpy(list[ind_min], list[fill]);
strcpy(list[fill], temp);
*/

*/



#include <stdio.h>
#include<string.h>
#define STRSIZ 30
#define MAXAPP 50
void main(void){
char one_char;
int i, num_app;
char applicants[MAXAPP][STRSIZ];

printf("Enter number of applicants (0 . . %d)\n> ", MAXAPP);
scanf("%d", &num_app);
do

scanf("%c", &one_char);
while (one_char != '\n');

printf("Enter names of applicants on separate lines\n");
printf("in the order in which they applied\n");
for (i = 0; i < num_app; ++i)
gets(applicants[i]);

}





