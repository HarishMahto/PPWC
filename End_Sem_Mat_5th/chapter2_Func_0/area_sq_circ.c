#include<stdio.h>
#define pi 3.142
double ar_sq(int l);
double ar_cir(int r);
int main(){
int l = 2, r =1;
double as, ac;

as = ar_sq(l);
ac =ar_cir(r);

printf("Area of square is %f\n", as);
printf("Area of circle is %f\n", ac);

return 0;
}

double ar_sq(int l){
return l*l;

}

double ar_cir(int r){
return pi*r*r;

}
