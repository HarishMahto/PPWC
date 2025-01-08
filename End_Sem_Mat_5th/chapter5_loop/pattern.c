/*
#include <stdio.h>

int main() {
    int n = 6; // Number of rows for the first half

    // First half of the pattern
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    // Second half of the pattern
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
*/

#include <stdio.h>

int main() {
int n =5, i, j;
for(i = 0; i < n; i++){
  for (j = 1; j <= n - i; j++){
        printf("%d", j);
        }
        
        for (j = 0; j <= 2*i; j++){
             printf(" ");
             }
             
             for (j = n - i; j >= 1; j--){
                if(i != n-1 || j != n)
                 printf("%d", j);
                 }
                 
                 printf("\n");
                 }
                 return 0;
                 }
