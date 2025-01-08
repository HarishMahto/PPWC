#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define STRSIZ 20

char *find_caps(char *caps, char *str);

int main(){

char caps[50];
char str[] = "IoJo";
find_caps(caps, str);

printf("%s\n", caps);
return 0;
}



char *find_caps(char *caps, char *str)

{
char restcaps[STRSIZ]; /* caps from reststr */

if (str[0] == '\0')
caps[0] = '\0'; 
else
if (isupper(str[0]))
sprintf(caps, "%c%s", str[0], find_caps(restcaps, &str[1]));
else
find_caps(caps, &str[1]);
return (caps);
}
