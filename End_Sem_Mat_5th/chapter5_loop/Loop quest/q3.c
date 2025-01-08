#include <stdio.h>

int main() {
    //char message[100];
    int N;
    
    // Input the string message
    //printf("Enter a message: ");
    //scanf("%s", message);
    
    // Input the number N
    printf("Enter a number N: ");
    scanf("%d", &N);
    
    int i = 1;
    while (i <= N) {
        printf("%d", i);
        
        // Determine the suffix (st, nd, rd, or th)
        if (i % 10 == 1 && i % 100 != 11)
            printf("st ");
        else if (i % 10 == 2 && i % 100 != 12)
            printf("nd ");
        else if (i % 10 == 3 && i % 100 != 13)
            printf("rd ");
        else
            printf("th ");
        
        printf("Hello\n");
        i++;
    }
    
    return 0;
}
