
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUFFSIZE 255
void main (int argc, char* argv[])
{
FILE *fp;
char buffer[BUFFSIZE];
int i,n;
fp = fopen(argv[1], "r");
if (fp == NULL){
    printf("File doesnot exist");
    exit(1);
    }
  while (!feof(fp)){
     fgets(buffer, BUFFSIZE, fp);  
     n = strlen(buffer);
     for(i = 0; i<n; i++){
         if(buffer[i]=='.'){
           i++;
           while(buffer[i]==' ')
{
i++;
}

if#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUFFSIZE 255
void main (int argc, char* argv[])
{
FILE *fp;
char buffer[BUFFSIZE];
int i,n;
fp = fopen (argv [1],"r");
if (fp == NULL) {
printf("%s file does not exist\n", argv[1]);
exit(1);
}
while (!feof(fp))
{
fgets(buffer, BUFFSIZE, fp);
n=strlen(buffer);
for(i=0;i<n;i++)
{
if(buffer[i]=='.')
{
i++;
while(buffer[i]==' ')
{
i++;
}
if(buffer[i] >=97 && buffer[i] <=122)
{
buffer[i]=buffer[i]-32;
}
}
}
puts(buffer);
}
fclose(fp);
}(buffer[i] >=97 && buffer[i] <=122)
{
buffer[i]=buffer[i]-32;
}
}
}

puts(buffer);

}

fclose(fp);
}
*/





#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUFFSIZE 255
void main (int argc, char* argv[])
{
FILE *fp;
char buffer[BUFFSIZE];
int i,n;
fp = fopen (argv [1],"r");
if (fp == NULL) {
printf("%s file does not exist\n", argv[1]);
exit(1);
}
while (!feof(fp))
{
fgets(buffer, BUFFSIZE, fp);
//fscanf(fp, "%s", buffer);
n=strlen(buffer);



for(i=0;i<n;i++)
{
if(buffer[i]=='.')
{
i++;
while(buffer[i]==' ')
{
i++;
}

if(buffer[i] >=97 && buffer[i] <=122)
{
buffer[i]=buffer[i]-32;
}
}
}

if (feof( fp )) break;
printf("%s", buffer);
//puts(buffer);

}
fclose(fp);
}

