#include <stdio.h>

int main() {
    FILE *filePtr;        // File pointer
    long position;        // To store the position in the file
    char buffer[256];     // Buffer to store text

    // Open the file for writing
    filePtr = fopen("example1.txt", "w+");
    if (filePtr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Write data to the file
    fputs("Hello, World!\n", filePtr);
    fputs("File handling in C is fun.\n", filePtr);
    fputs("This demonstrates fseek, ftell, and rewind.\n", filePtr);

    // Use ftell() to get the current file position
    position = ftell(filePtr);
    printf("Current position after writing: %ld\n", position);

    // Use fseek() to move the file pointer to the beginning
    fseek(filePtr, 0, SEEK_SET);//SEEKSET: value is 0(moving to the starting position)

    // Read and display the file content from the beginning
    printf("\nReading the file after seeking to the start:\n");
    while (fgets(buffer, sizeof(buffer), filePtr) != NULL) {
        printf("%s", buffer);
    }

    // Use fseek() to move the file pointer to the middle of the file
    fseek(filePtr, 13, SEEK_SET);  // Move 13 bytes from the start
    position = ftell(filePtr);    // Get the current position
    printf("\nFile position after fseek to the middle: %ld\n", position);

    // Use rewind() to move back to the beginning
    rewind(filePtr);
    printf("File position after rewind: %ld\n", ftell(filePtr));

    // Close the file
    fclose(filePtr);

    return 0;
}

