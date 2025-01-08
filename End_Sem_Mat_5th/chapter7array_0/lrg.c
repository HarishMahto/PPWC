
#include<stdio.h>

int main(){
int n =5, cur_large;
int list[n];

int i;
for (i = 0; i < n; ++i){
scanf("%d", &list[i]);
}

for (i = 0; i < n; ++i){
printf("%d, ", list[i]);
}
cur_large = list[0];

for (i = 1; i < n; ++i){
if (list[i] > cur_large){
cur_large = list[i];
}
}
printf("Largest element present in given array: %d\n", cur_large);    

}
