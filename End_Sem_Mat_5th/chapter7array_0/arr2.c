/*
     * C Program to Input an Array, Store the Squares of these Elements in an Array & Print it
     */
 /*
    #include <stdio.h>
    #define MAX_ROWS 3
    #define MAX_COLS 4
 
    void print_square(int [ ] );
    void main (void)
    {
 
        int i;
        int num [MAX_ROWS][MAX_COLS] = { {10, 20, 30, 40}, {50, 60, 70, 80}, {90, 100, 110, 120} };
        for (i = 0; i < MAX_ROWS; i++)
            print_square(num[i]);
 
    }
 
    void print_square(int x[ ])
    {
 
        int j;
        for (j = 0; j < MAX_COLS; j++)
            printf ("%d\t", x[j] * x[j]);
        printf("\n");
 
    }
    */
    
    #include<stdio.h>
    #include<math.h>
    
    void main(){
    int i;
    int sq[5];
    double sqt[5];
    for(i=0; i<5; i++){
     sq[i] = i*i;
     sqt[i] = sqrt((double)i);
     printf("sq[%d] = %d\n", i, sq[i]);
     printf("sqrt[%d] = %.3f\n", i, sqt[i]);
     //printf("%d \n %f\n", sq[i], sqt[i]);
    
    }
    
    }
    
