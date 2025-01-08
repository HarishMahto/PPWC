
/*Selection sort-------------------------------------*/

void select_sort(int list[], int n);

#include<stdio.h>
void main(){
select_sort(int list[], int n);

}



void select_sort(int list[], int n)

{
int fill, temp, index_of_min;

for (fill = 0; fill < n-1; ++fill) {

index_of_min = get_min_range(list, fill, n-1);

if (fill != index_of_min) {
temp = list[index_of_min];
list[index_of_min] = list[fill];
list[fill] = temp;
}
}
}
