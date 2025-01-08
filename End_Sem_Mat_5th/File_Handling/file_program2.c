#include <stdio.h>

int main() {
    FILE *filePtr;   // File pointer
    char buffer[256]; // Buffer to store a line of text

    // Open the file for writing
    filePtr = fopen("example.txt", "w");
    if (filePtr == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    // Write data to the file
    fputs("Hello, this is a test file.\n", filePtr);
    fputs("File handling in C is interesting.\n", filePtr);
    printf("Data written to file successfully.\n");

    // Close the file after writing
    fclose(filePtr);

    // Open the file for reading
    filePtr = fopen("example.txt", "r");
    if (filePtr == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\nReading data from file:\n");

    // Read data from the file and display it
    while (fgets(buffer, sizeof(buffer), filePtr) != NULL) {
        printf("%s", buffer);
    }

    // Close the file after reading
    fclose(filePtr);

    return 0;
}

