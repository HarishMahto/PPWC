//Matrix multiplication
/*
#include<stdio.h>
int main( ){
int A[2][3], B[3][4], R[2][4];
int i, j , k;

for(i=0;i<2;i++){
  for(j=0;j<4;j++){
    R[i][j] = 0;
    printf("%d ", R[i][j]);
     
    }
    printf("\n");
    }
    }
 */   
    
    
/*    
    #include <stdio.h>
int main()
{
int matA[2][3], matB[3][4], matR[2][4];
int i,j,k;
printf("Enter elements of the first matrix of order 2 x 3 \n");
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&matA[i][j]);
}
}
printf("Enter elements of the second matrix of order 3 x 4 \n");
for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{
scanf("%d",&matB[i][j]);
}
}
for(i=0;i<2;i++)
{
for(j=0;j<4;j++)
{
matR[i][j]=0;
for(k=0;k<3;k++)
{
matR[i][j]=matR[i][j]+matA[i][k]*matB[k][j];
}
}
}
printf("\nFirst Matrix is \n");
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",matA[i][j]);
}
printf("\n");
}
printf("\nSecond Matrix is \n");
for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{
printf("%d\t",matB[i][j]);
}
printf("\n");
}
printf("\nMatrix multiplication is \n");
for(i=0;i<2;i++)
{
for(j=0;j<4;j++)
{
printf("%d\t",matR[i][j]);
}
printf("\n");
}
return 0;
}
*/

/*
#include<stdio.h>
#define max 100


void main()
{
int p[max], q[max], r[max];
int m,n;
int i,j,x, flag, k;
k=0;
printf("Enter the length of the first array:");
scanf("%d",&m);
printf("Enter %d elements of the first array\n",m);
for(i=0;i<m;i++ )
scanf("%d",&p[i]);
printf("\nEnter the length of the second array:");
scanf("%d",&n);
printf("Enter %d elements of the second array\n",n);
for(i=0;i<n;i++ )
scanf("%d",&q[i]);

flag =0;
for (i=0;i<m;i++)
{
    for (j=0;j<n;j++)
    {
      if (p[i]==q[j])
        {
          flag = 0;
            for(int x = 0; x < k; x++){
              if(r[k] = p[i]){
                             flag++;}
                             }
                             
         if(flag == 0){ 
             r[k] = p[i];}                   

}
}
}

printf("\nThe common elements in the two arrays are:\n");

for(i = 0; i<k; i++){
printf("%d\n",r[i]);

}

}

*/

/*
#include<stdio.h>
int main()
{
    int array1[] = { 1, 2, 3};
    int array2[] = { 3, 2, 1 };
    int i, j, flag, x, k = 0;
    int result[100];
    printf("Common elements are: ");
   
    // To traverse in array1.
    for (i = 0; i < sizeof(array1) / 4; i++) {
       
        // To traverse in array2.
        for (j = 0; j < sizeof(array2) / 4; j++) {
           
            // To match elements of array1 with elements of
            // array2.
            if (array1[i] == array2[j]) {
               
                flag = 0;
               
                // To traverse in result array.
                for (x = 0; x < k; x++) {
                   
                    // Check whether found element is
                    // already present in result array or
                    // not.
                    if (result[x] == array1[i]) {
                        flag++;
                    }
                }
               
                // If we found a new element which is common
                // in both arrays then store it in result
                // array and print it.
                if (flag == 0) {
                   
                    result[k] = array1[i];
                    printf("%d ", result[k]);
                    k++;
                }
            }
        }
    }
}

*/


#include<stdio.h>
int main()
{
int i, j, k;
int A[2][2], B[2][3], R[2][3];
printf("Enter the elements of matrix A(2 x 2)\n");

for(i = 0; i< 2; i++){
   for(j = 0; j< 2; j++){
    scanf("%d", &A[i][j]);}
    }
    
printf("Enter the elements of matrix B(2 x 3)\n");    
for(i = 0; i< 2; i++){
   for(j = 0; j< 3; j++){
    scanf("%d", &B[i][j]);}
}

printf("The elements of matrix A(2 x 2): \n");

for(i = 0; i< 2; i++){
   for(j = 0; j< 2; j++){
    printf("%d ", A[i][j]);}
    printf("\n");
    }


printf("The elements of matrix B(2 x 3): \n");

for(i = 0; i< 2; i++){
   for(j = 0; j< 3; j++){
    printf("%d ", B[i][j]);}
    printf("\n");
    } 
    



for(i = 0; i< 2; i++){
  for(j = 0; j< 3; j++){ 
  R[i][j]= 0;
    for(k = 0; k< 2; k++){
       R[i][j] =  R[i][j] + A[i][k] * B[k][j];}
       }
       }
       
printf("The elements of matrix R(2 x 3): \n");
       
 for(i = 0; i< 2; i++){
   for(j = 0; j< 3; j++){
    printf("%d ", R[i][j]);}
    printf("\n");
    } 
    
 return 0;   
}          
       
   
    
    
         
    












