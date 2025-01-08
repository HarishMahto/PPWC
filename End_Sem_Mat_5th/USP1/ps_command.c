//Seeing the process_id using ps command
#include<stdio.h>
#include<unistd.h>
int main()
{
	printf("Process id = %d\n", getpid());
	printf("Parent process if = %d\n", getppid());
	while(1);
	return(0);
}



// use ps -ef | grep a.out in another window
