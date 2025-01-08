//Program showing difference in execution time of auto and register storage class------------------

#include<stdio.h>
# include<time.h>

int main() {
clock_t start, end;
double execution_time1, execution_time2 ;


int i;
//------------auto storege-----------------
start = clock();

for(i =0; i<10; i++){
   auto int x = i;
   x++;
   }
   
 end = clock();
execution_time1 = ((double)(end - start))/CLOCKS_PER_SEC;
printf("Time taken to execute (auto_storage) in seconds : %f\n", execution_time1);


//---------------------register storage----------------------
start = clock();

for(i =0; i<10; i++){
   register int x = i;
   x++;
   }
   
 end = clock();
execution_time2 = ((double)(end - start))/CLOCKS_PER_SEC;
printf("Time taken to execute (reg_storage) in seconds : %f\n", execution_time2);
    return 0;
}
