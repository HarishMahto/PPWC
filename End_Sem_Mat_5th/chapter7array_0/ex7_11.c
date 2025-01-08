#include<stdio.h>

#define A_SIZE 20
#define SENT -1.0

void fill_to_sentinel(int dbl_max, double sentinel, double dbl_arr[], int *dbl_sizep);
int main(void)
{
double arr[A_SIZE];
int in_use, i;
/* number of elements of arr in use */

fill_to_sentinel(A_SIZE, SENT, arr, &in_use);
printf("List of data values\n");
for (i = 0; i < in_use; ++i){
  printf("%13.3f\n", arr[i]);

}



return (0);

}

void fill_to_sentinel(int dbl_max, double sentinel, double dbl_arr[], int *dbl_sizep){
double data;
int i, status;

i=0;
status = scanf("%lf", &data);
while (status == 1 && data != sentinel && i < dbl_max) {
dbl_arr[i] = data;
++i;
status = scanf("%lf", &data);
}

/* Issues error message on premature exit*/
if (status != 1) {
printf("\n*** Error in data format ***\n");
printf("*** Using first %d data values ***\n", i);
}
else if (data != sentinel) {
printf("\n*** Error: too much data before sentinel ***\n");
printf("*** Using first %d data values ***\n", i);
}
/* Sends back size of used portion of array*/
*dbl_sizep = i;

}








