#include<stdio.h>
#include <string.h>
#define LINE_DELIMITERS "\n"
#define WORD_DELIMITERS " "
static int wordcount(char *s);
double wordaverage(char *s);
int main(){
char str[]="This is a line of text\n It is the second line \n then next line";
double wordavg=wordaverage(str);
printf("Word average=%f\n",wordavg);
return 0;}

static int wordcount(char *s) {
int count = 1;
char *lasts;
if (strtok_r(s, WORD_DELIMITERS, &lasts) == NULL)
return 0;
while (strtok_r(NULL, WORD_DELIMITERS, &lasts) != NULL)
count++;
return count;
}
double wordaverage(char *s) {
char *lasts;
int linecount = 1;
/* return average size of words in s */
char *nextline;
int words;
nextline = strtok_r(s, LINE_DELIMITERS, &lasts);
if (nextline == NULL)
return 0;
words = wordcount(nextline);
while ((nextline = strtok_r(NULL, LINE_DELIMITERS, &lasts)) != NULL) {
words += wordcount(nextline);
linecount++;
}
return (double)words/linecount;
}

