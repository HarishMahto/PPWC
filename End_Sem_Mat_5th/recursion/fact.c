#include<stdio.h>
int fact(int m);
int main(){
int f, m=4;
f= fact(m);
printf("Factorial of the number %d is %d\n", m,f);
return 0;
}

int fact(int m){
int ans;
if (m == 0)
   ans = 1;
else
  ans = m * fact(m-1);
  
  return (ans);

}

