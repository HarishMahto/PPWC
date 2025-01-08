/*#include <stdio.h>
int main()
{
int a[100], n, i, j, position, swap;
printf("Enter number of elementsn");
scanf("%d", &n);
printf("Enter %d Numbersn", n);
for (i = 0; i < n; i++)
scanf("%d", &a[i]);
for(i = 0; i < n - 1; i++)
{
position=i;
for(j = i + 1; j < n; j++)
{
if(a[position] > a[j])
position=j;
}
if(position != i)
{
swap=a[i];
a[i]=a[position];
a[position]=swap;
}
}
printf("Sorted Array:n");
for(i = 0; i < n; i++)
printf("%dn", a[i]);
return 0;
}*/



#include <stdio.h>
void SelSort(int array[],int n);
int main()
{
int array[100], n,i;
printf("Enter number of elements\n");
scanf("%d", &n);
printf("Enter %d Numbers\n", n);
for(i = 0; i < n; i++)
scanf("%d", &array[i]);
SelSort(array,n);
return 0;
}
void SelSort(int array[], int n)
{
int i, j, position, swap;
for(i = 0; i < (n - 1); i++)
{
   position=i;
    for(j = i + 1; j < n; j++)
     {
       if(array[position]>array[j])
        position=j;
        }
         if(position != i)
          {
           swap=array[i];
           array[i]=array[position];
           array[position]=swap;
           }
}
printf("Sorted Array:n");
for(i = 0; i < n; i++)
printf("%dn", array[i]);
}
