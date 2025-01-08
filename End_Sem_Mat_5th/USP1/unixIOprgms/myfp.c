#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(){
FILE *myfp;
if((myfp = fopen("data1.txt", "w")) == NULL)
   perror("Failed to open");
 else
   fprintf(myfp, "This is a test"); 
   // fprintf(stdout, "This is a test");
    return 0;
 }    
