
/*

#include<stdio.h>
int main(){
char d[];
printf("Enter a sentence: \n");
while(d!= '\n'){

scanf("%c", &d);
}

printf(The entered sentence is: ", d[i]
}
*/




#include <stdio.h>

int main()
{
  int c_char=0;
  int c_word=1;

  printf("Enter Sentence: ");
  //char ch='a';
  char ch[];
  while(ch!='\n')
  {
    //ch=getchar();
    scanf("%c", &ch);
    if(ch==' ')
      c_word++;
    else
      c_char++;
  }
  //printf("%c", ch);
  printf("\n Words = %d ",c_word);

  printf("Characters = %d",c_char-1);

  //getc();
}
