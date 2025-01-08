#include<stdio.h>
int mult(int m, int n);
int main(){
int res, m =6, n =3;
res = mult(m, n);
printf("%d\n", res);
}

int mult(int m, int n){
int ans;
printf("Entering multiply with m = %d, n = %d\n", m, n);
if(n==1){
ans = m;}
else{
  ans = m + mult(m, n-1);}
  printf("multiply(%d, %d) returning %d\n", m, n, ans);
  return(ans);


}
