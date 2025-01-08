#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
int main(void){
pid_t pid;
int varl = 100;
pid = fork();

if (pid == 0)
 varl = 200;
 
 fork();
  printf("%d\n", varl);
  return 0;
  }
