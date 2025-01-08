/*#include<stdio.h>
void main(){
int x[5][2]= {
              {1234, 70},
              {1235, 80},
              {1236, 40},
              {1237, 85},
              {1238, 60}
              };
              
int i;
*/

/*for(i =0; i< 5; i++){
printf("The address of %d:  %ld \n", i, (long)x[i]);
}*/

/*
printf("%d\n", x[0][1]);

printf("The address of x[0] is%ld\n", (long)&x[0]);
printf("The address of x[0] is%ld\n", (long)x);
printf("The address of x[1] is%ld\n", (long)&x[1]);
printf("The address of x[1] is%ld\n", (long)(x+1));
printf("The address of x[0][1] is%ld\n", (long)&x[0][1]);
//printf("The address of x[0][1] is%ld\n", (long)&(x[0]+1));
printf("The value at x[2][1] is %d\n", x[2][1]);
printf("The value at x[2][1] is %d\n", *(x[2]+1));
printf("The value at x[2][1] is %d\n", *(*(x+2)+1));
}
 */  
   
/*   
#include<stdio.h>
int main(){
int i, j;
int arr[3][2] = {
                 {1234, 57},
                 {1235, 60},
                 {1236, 75}
                 };
                 
for(i=0; i<3; i++) {
                
   //for(j=0; j<2; j++){             
                 
      //printf("\nThe elements in the array are  %d: ", arr[i][j]);
      printf("\nThe elements in the array are:  %d %d \n", arr[i][0], arr[i][1] );
      
      //}
      }
      
      printf("---------------------\n\n");
      for(i=0; i<3; i++) {
      printf("The address of the element arr[%d][0] : %ld\n", i, (long)arr[i]);
      }
      
  printf("The mark of the third student is %d: \n", arr[2][1]);    
      
}*/

//----------Pointers and 2-Dimensional Arrays---------------------------------------
/*
#include<stdio.h>
int main(){
int i, j;
int arr[3][2] = {
                 {1234, 57},
                 {1235, 60},
                 {1236, 75}
                 };
                 
for(i=0; i<3; i++) {
                               
printf("1st The address of the element arr[%d][1] : %ld\n", i, (long)(arr[i]+1)    );          
printf("2nd The address of the element arr[%d][1] : %ld\n", i, (long)(*(arr + i)+1)    ); 

                                 
 } 
 
 printf("The values are--------------------\n\n");
 
 for(i=0; i<3; i++) {
                               
printf("1st The value of the element arr[%d][1] : %d\n", i, arr[i][1]);          
printf("2nd The value  of the element arr[%d][1] : %d\n", i, *(arr[i]+1)); 
printf("3rd The value  of the element arr[%d][1] : %d\n", i, *(*(arr + i)+1)); 

                                 
 }
 }                
   */

/* Pointer notation to access 2-D array elements */
#include<stdio.h>
int main(){
int s[4][2] = {
{ 1234, 56 },
{ 1212, 33 },
{ 1434, 80 },
{ 1312, 78 }
} ;
int i, j ;
for ( i = 0 ; i <= 3 ; i++ )
{
printf ( "\n" ) ;
for ( j = 0 ; j <= 1 ; j++ )
printf ( "%d ", *( *( s + i ) + j ) ) ;
}
}   
   
   
   
   
                 
                 
                











