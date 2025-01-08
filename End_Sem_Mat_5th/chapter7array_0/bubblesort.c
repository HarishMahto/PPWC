
/*-----Bubble sort program--------------------------------------------*/


#include <stdio.h>  
void bubble_sort(int list[], int n);
int main() {  
int n, i;
int list[n];  
 
printf("Enter number of elements:\n");
scanf("%d", &n);
printf("Enter %d Numbers: \n", n);
for (i = 0; i < n; i++)
scanf("%d", &list[i]);
  bubble_sort(list, n);  
  printf("Sorted list: ");  
  for (int i = 0; i < n; i++) {  
    printf("%d ", list[i]);  
  }
  printf("\n");  
  return 0;  
} 

void bubble_sort(int list[], int n) {  
  int i, j;  
  printf("Enter the elements: \n");
  for (i = 0; i < n - 1; i++) {  
    for (j = 0; j < n - i - 1; j++) {  
      if (list[j] > list[j + 1]) {  
        int temp = list[j];  
        list[j] = list[j + 1];  
        list[j + 1] = temp;  
      }  
    }  
  }  
}   
