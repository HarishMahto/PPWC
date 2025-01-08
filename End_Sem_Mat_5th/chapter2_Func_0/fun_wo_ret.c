#include<stdio.h>

void circle(void);
void rect(void);
int main(){
circle();
rect();
return 0;
}

void circle(void)
{
printf("  **\n");
printf("*    *\n");
printf("  **\n");
}

void rect(void){
printf("*******\n");
printf("*     *\n");
printf("*     *\n");
printf("*******\n");
}


