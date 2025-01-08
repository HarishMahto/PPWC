/*
#include<unistd.h>
#include<stdio.h>
int main(){
int n;
char buff[15];
n = read(0, buff, 15);
write(1, buff, n);
return 0;
}*/

#include<unistd.h>
#include<stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include<sys/types.h>
int main(){
int fd1, fd2, n;
char buff[25];

fd1= open("my.dat", O_RDONLY);
fd2= open("my.dat1", O_WRONLY | O_APPEND);

n = read(fd1, buff, 20);
write(fd2, buff, n);
}

/*
#include<unistd.h>
#include<stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include<sys/types.h>
int main(){
int fd1, fd2, n;
char buff[25];

fd1= open("my.dat", O_RDONLY);
fd2= open("my.dat1", O_WRONLY | O_APPEND);

while ((n = read(fd1, buff, 20);
write(fd2, buff, n);
}

*/


