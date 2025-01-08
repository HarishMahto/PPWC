#include<stdio.h>
int add(int n);
void main(){
printf("%d\n", add(5));
}


int add(int n){
int ans;
if (n==1)
return n;
else{
ans=n+add(n-1);
return ans;
}
}

