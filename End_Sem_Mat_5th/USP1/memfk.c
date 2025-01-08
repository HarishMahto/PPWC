#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
int main(void){
pid_t pid;
int x = 100;
printf("%d and address is %p\n", x, &x);
pid = fork();
x = 200;
printf("%d and address is %p\n", x, &x);
  return 0;
  }
