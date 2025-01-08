/*
#include<stdio.h>
#include <unistd.h>
int main(){
 char buf[100];
 ssize_t bytesread;
 ssize_t byteswritten;
 
 
 //bytesread = read(STDIN_FILENO, buf, 100);
 //bytesread = read(0, buf, 10);
 //printf("%ld\n", (long)bytesread);
 byteswritten=write(1, "hello\n", 10);
 
 //printf("read %zd\n", bytesread);
 printf("written %zd\n", byteswritten);
 return 0;


}*/


/*
#include<stdio.h>
#include <unistd.h>
int main(){
 char buf[100];
 ssize_t bytesread;
 bytesread = read(STDIN_FILENO, buf, 100);
 write(1, buf, 10);
 return 0;
 }
*/ 
 /* 
 #include<stdio.h>
#include <unistd.h>
void main(){
 FILE *myfp;
if ((myfp = fopen("my.dat", "w")) == NULL)
perror("Failed to open my.dat");
else
printf("%d\n", myfp);
fprintf(myfp, "This is a test");
}*/

#include<stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
void main(){
int myfd, myfd1;
myfd = open("my.dat", O_RDONLY);
myfd1 = open("my.dat", O_RDONLY);
printf("%d\n", myfd);
printf("%d\n", myfd1);
}


