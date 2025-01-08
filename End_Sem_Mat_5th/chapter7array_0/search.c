/*
#include<stdio.h>
#define NOT_FOUND -1

int search(const int arr[], int target, int n);
int main(){
int n= 4, target;

int arr[]={10, 56, 30, 20};
printf("Enter the value to be searched: ");

scanf("%d", &target);
int x = search(arr, target, n);
printf("%d", x);

return 0;
}

int search(const int arr[], int target, int n)
{
int i, found = 0, where;

i = 0;
while (!found && i < n) {
if (arr[i] == target)
found = 1;
else
++i;

}
if (found){
where = i;}
else{
where = NOT_FOUND; }
return (where);
}
*/



#include<stdio.h>
#define NOT_FOUND -1


int main(){
int n= 4, target;

int arr[]={10, 56, 30, 20};
printf("Enter the value to be searched: ");

scanf("%d", &target);

int i, found = 0, where;

i = 0;
while (!found && i < n) {
if (arr[i] == target)
found = 1;
else
++i;

}
if (found){
where = i;}
else{
where = NOT_FOUND; }


printf("%d", where);

return 0;
}


