//Predict the output
/*
//-----Program 1--------------------
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
 
void forkexample()
{
    int x = 1;
    pid_t p = fork();
      if(p<0){
      perror("fork fail");
      exit(1);
    }
    else if (p == 0)
        printf("Child has x = %d\n", ++x);
    else
        printf("Parent has x = %d\n", --x);
}
int main()
{
    forkexample();
    return 0;
}*/







/*
//Program 2------------------------
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
int main(){
pid_t p;
int x = 0;

p = fork();
 if(p == 0){
  printf("\t\t\t\t---Child process----\n");
     x = 1;
     while(x < 10){
       printf("\t\t\t\tx = %d\n", x);
       x++;
       }
       }
       
else {
   printf("------Parent process--------\n");
    while(x < 5){
       printf("x = %d\n", x);
       x = x + 3;
       }
      } 
       
return 0;
}  

*/  

/*
//------program 3-------------------------
//-----program for fork() || fork()
#include <stdio.h>
#include <unistd.h>
int main()
{
printf("parent pid = %ld\n", (long)getpid());
if (fork() || fork())
fork();
printf("pid = %ld osw\n", (long)getpid());
return 0;
} 
*/



/*

//----------------program 4-------------------
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
int pid, pid2;
pid=fork();

if(pid){

pid2=fork();

printf("iter");
}
else
{
printf("iter");
pid2=fork();

}
return 0;
}  

*/



/*

//-----------Program 5-------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(void){
printf("Fork create many confusion");
fork();
printf("We suppose to read and Practice\n");
return 0;
}

*/



/*
//-----------Program 6-------------------------------
#include <stdio.h>
#include <unistd.h>
int main(void) {
fork();
fork();
fork();
fork();
printf("ITER\n");
printf("ITER\n");
printf("ITER\n");
sleep(4);
return 0;
}
  */  
   
