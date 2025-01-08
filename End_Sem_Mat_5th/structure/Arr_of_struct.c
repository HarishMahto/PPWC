


#include <stdio.h>
#include <string.h>
struct student {
char name[10];
int r_n;
int sec;
};
void main( ){
struct student s[3];
int i;
printf("Enter name roll no and section\n");
for(i = 0; i< 3; i++){
  scanf("%s%d%d", s[i].name, &s[i].r_n, &s[i].sec);
  }
for(i = 0; i< 3; i++){
printf("name = %s  roll no = %d section = %d\n", s[i].name, s[i].r_n, s[i].sec);
}

}

