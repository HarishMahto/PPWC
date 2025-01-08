#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include <sys/stat.h>
int main()
{
int fd;
char buff[50];
char msg[50] = "hello";
fd = open ("data.txt", O_RDWR);
printf("fd =%d", fd);
if (fd != -1)
{
printf("\n data.txt open with read write mode\n");
write(fd, msg, sizeof(msg));
lseek(fd, 0, SEEK_SET);
read(fd, buff, sizeof(buff));
write(1, buff, sizeof(buff) );
printf("\n %s was written to my file\n", buff);
close(fd);
}
return 0;
}
