/*
#include <stdio.h>
#include <unistd.h>
int main(void) {
int x;
x = 0;
fork();
x = 1;
printf("I am process %ld and my x is %d\n", (long)getpid(), x);
return 0;
}*/



/*
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
  printf("process_id(pid) = %d \n", getpid());
 
    // make two process which run same
    // program after this instruction
    pid_t p = fork();
    if(p<0){
      perror("fork fail");
      exit(1);
    }
    printf("Hello world!, process_id(pid) = %d \n",getpid());
    return 0;
}*/






/*
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
int main(){
pid_t p;
int x = 1;
printf("Before fork: x = %d and My process id is %ld\n", x, (long)getpid());
p = fork();

printf("After fork\n");

if (p == -1) {
 perror("Failed to fork");
return 1;
}
if (p == 0)
  printf("I am child; x = %d, My process id: %ld\n", x, (long)getpid());
  
 else
  printf("I am parent: x = %d and My process id is %ld\n", x, (long)getpid());

return 0;
}

*/


/*
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
  printf("process_id(pid) = %d \n", getpid());
 
    // make two process which run same
    // program after this instruction
    pid_t p = fork();
    if(p<0){
      perror("fork fail");
      exit(1);
    }
    
    if(p > 0)
      printf("I am parent my id: %ld and my child id: %ld\n", (long)getpid(), (long)p);
    
    else  
      printf("I am child  my_id: %ld and my parent id is %ld\n",(long)getpid(), (long)getppid());
    return 0;
}

*/


#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
 fork();
 fork();
 fork();
 printf("hello\n");
 //sleep(5);
    return 0;
}












