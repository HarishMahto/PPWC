
//INITIAL VALUE OF AUTO VARIABLE
/*
#include<stdio.h>
void main(void){
auto int i;
i = i * 1;
printf("The value of i: %d\n", i); //value is  garbage
} */



//LIFE TIME OF REGISTER STORAGE CLASS

#include<stdio.h>
void func();
int main(){
  func();
  func();
  func();
return 0;
}

void func(){
 register int i =1;  //reinitialization takes place 
       i++;                     
       printf("The value of i = %d\n", i);
       }

  








//Program showing difference in execution time of auto and register storage class------------------

/*
#include <stdio.h>
#include <time.h>

int main() {
    clock_t start_time, end_time;
    double cpu_time_used;

    // Using the auto storage class
    start_time = clock();
    for (int i = 0; i < 1000000000; i++) {
        auto int x = i;
        // Accessing the variable
        x++;
    }
    end_time = clock();

    cpu_time_used = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
    printf("Time taken for auto storage class: %f seconds\n", cpu_time_used);

    // Using the register storage class
    start_time = clock();
    for (int i = 0; i < 1000000000; i++) {
        register int y = i;
        // Accessing the variable
        y++;
    }
    end_time = clock();

    cpu_time_used = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
    printf("Time taken for register storage class: %f seconds\n", cpu_time_used);

    return 0;
}

*/
