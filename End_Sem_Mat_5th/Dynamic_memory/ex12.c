/*

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *dynamicVar;
    int size;

    // Input the size of the dynamic array
    printf("Enter the size of the dynamic array: ");
    scanf("%d", &size);

    // Allocate memory for the dynamic array
    dynamicVar = (int *)malloc(size * sizeof(int));

    if (dynamicVar == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Return an error code
    }

    // Initialize and display the dynamic array
    for (int i = 0; i < size; i++) {
        dynamicVar[i] = i * 2;
        printf("dynamicVar[%d] = %d\n", i, dynamicVar[i]);
    }

    // Release allocated memory
    free(dynamicVar);

    return 0;
}
*/

#include <stdio.h>

int main() {
    int n = 7; // Number of lines

    for (int i = 0; i < n; i++) {
        char ch = 'A';
        
        // Print left side
        for (int j = 0; j < n - i; j++) {
            printf("%c ", ch++);
        }
        
        // Print spaces
        for (int j = 0; j < 2 * i; j++) {
            printf("  ");
        }
        
        ch -= 1;
        
        // Print right side
        for (int j = 0; j < n - i; j++) {
            printf("%c ", ch--);
        }
        
        printf("\n");
    }

    return 0;
}







