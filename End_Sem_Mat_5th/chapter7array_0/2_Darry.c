
/*
#include<stdio.h>
int main(){
int i, j;
int stud[4][2];

for ( i = 0 ; i <4 ; i++ ){

printf("Enter roll no. and marks; \n");

scanf("%d%d", &stud[i][0], &stud[i][1]);
}

for ( i = 0 ; i <4 ; i++ ){
printf("roll no. and marks %d %d: \n", stud[i][0], stud[i][1]);

}
return 0;

}


/*Initialising a 2-dimensional array----------------------*/
/*
#include<stdio.h>
int main(){
int stud[4][2] = {
                    {123, 60},
                    {124, 70},
                    {125, 80},
                    {126, 90}                   
                    };
                    
  printf("The value of roll no stud[][] is %d  \n", stud[0][0]); 
  
  return 0;
  }*/
  
  
  
 //----------- Two Dimensional Array to store and display values----------------------------
 
//------- C program to store temperature of two cities for a week and display it.------------------
#include <stdio.h>

const int CITY = 2;
const int WEEK = 7;

int main()
{
    int temperature[CITY][WEEK];
    for (int i = 0; i < CITY; ++i) {
        for(int j = 0; j < WEEK; ++j) {
            printf("City %d, Day %d: ", i+1, j+1);
            scanf("%d", &temperature[i][j]);
        }
    }

    printf("\nDisplaying values: \n\n");
    for (int i = 0; i < CITY; ++i) {
        for(int j = 0; j < WEEK; ++j)
        {
            printf("City %d, Day %d = %d\n", i+1, j+1, temperature[i][j]);
        }
    }
    return 0;
}























                   
