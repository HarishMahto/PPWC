

//Program to print size of memory allocated through malloc

/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    size_t size;

    ptr = (int *)malloc(5 * sizeof(int)); // Allocate memory using malloc

    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Find the size of allocated memory
    size = 5 * sizeof(int);

    printf("Size of allocated memory: %zu bytes\n", size);

    free(ptr);  // Don't forget to free the allocated memory when done

    return 0;
    
 */   
    
    
    
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int size = 5; // Number of integers to allocate space for

    // Allocate memory for an array of integers
    ptr = (int *)malloc(size * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Fill the allocated memory with values
    for (int i = 0; i < size; i++) {
        ptr[i] = i * 10;
    }

    
    printf("Values stored in allocated memory (before freeing):\n");  // Print the values stored in allocated memory before freeing
    for (int i = 0; i < size; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Deallocate (free) the memory
    free(ptr);

    // Attempt to access the memory after freeing (undefined behavior)
    // This is just to demonstrate that the memory has been freed
    printf("Values stored in allocated memory (after freeing):\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    return 0;
}


