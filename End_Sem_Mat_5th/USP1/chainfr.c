#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
int main (int argc, char *argv[]) {
pid_t childpid;
int i, n;
if (argc != 2){// check for valid number of command-line arguments
fprintf(stderr, "Usage: %s processes\n", argv[0]);
return 1;
}
n = atoi(argv[1]);
for (i = 1; i < n; i++){
   childpid=fork();
   if (childpid > 0){
    break;
    }
   else{ 
    
     // printf("Child process ID is %d\n", getpid());
}}
printf("i:%d process ID:%ld parent ID:%ld child ID:%ld\n", i, (long)getpid(), (long)getppid(), (long)childpid);
 //fprintf(stderr, "i:%d process ID:%ld parent ID:%ld child ID:%ld\n", i, (long)getpid(), (long)getppid(), (long)childpid);
sleep(5);
return 0;
}




/*
int main() 
{ 
    int pid; 
  
    
    for (int i = 0; i < 3; i++) { 
        pid = fork(); 
  
        if (pid > 0) { 
            // Print the parent process 
            printf("Parent process ID is %d\n", 
                   getpid()); 
            break; 
        } 
        else { 
            // Print the child process 
            printf("Child process ID is %d\n", getpid()); 
        } 
    } 
    sleep(5);
  
    return 0; 
} 

*/
