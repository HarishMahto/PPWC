#include<stdio.h>
double stenav(int s, int d, int p, int c);
double stenper(int s, int d, int p, int c);
#define sent -5
int main(){
int s, d, p, c, i;
double avg, per;

scanf("%d", &s);
if(s == sent){
  printf("Invalid\n");
 
 }
 
 else
 {

//printf("Dos_marks: ");
scanf("%d", &d);
//printf("Python_marks: ");
scanf("%d", &p);
//printf("C_marks: ");
scanf("%d", &c);

double av = stenav(s,d,p,c);
double per= stenper(s, d, p, c);
printf("stud_reg_no:%d \t  dos:%d\t python: %d\t c: %d\t avg:%.3lf \tper: %.3lf\n",s, d, p, c, av, per);
return 0;
}
}

double stenav(int s, int d, int p, int c){
double avg = (d + p + c)/3;
return avg;
}

double stenper(int s, int d, int p, int c){
double per = ((d + p + c)/300) * 100;
return per;
}


