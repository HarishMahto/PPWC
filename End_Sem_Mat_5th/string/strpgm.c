/*#include <stdio.h>
#include <stdlib.h>

void main()
{
    char str[100]; 
    int l= 0;
	
       printf("\n\nFind the length of a string :\n");
       printf("---------------------------------\n"); 	
       printf("Input the string : ");
       
       scanf("%s", str);
       //fgets(str, sizeof str, stdin);
    while(str[l]!='\0')
    {
      printf("The values are %c:  and l is %d\n", str[l], l);
        l++;
    }
    printf("Length of the string is : %d\n\n", l-1);
}*/



/*To separate the individual characters------------------------------------*/

/*
#include <stdio.h>
#include <stdlib.h>


void main()
{
    char str[100]; 
    int l= 0;
	
       printf("\n\nSeparate the individual characters from a string :\n");
       printf("------------------------------------------------------\n"); 	
       printf("Input the string : ");
       //fgets(str, sizeof str, stdin);
       scanf("%s", str);
	   printf("The characters of the string are : \n");
    while(str[l]!='\0')
    {
       printf("%c,  ", str[l]);
       l++;
    }
    printf("\n");
}
*/


/*Write a program in C to print individual characters of string in reverse order------------------------*/

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    char str[100]; 
    int l,i;
	
       printf("\n\nPrint individual characters of string in reverse order :\n");
       printf("------------------------------------------------------\n"); 	
       printf("Input the string : ");
       scanf("%s", str);
       //fgets(str, sizeof str, stdin);
	   l=strlen(str);
	   printf("The characters of the string in reverse are : \n");
       for(i=l;i>=0;i--)
        {
          printf("%c  ", str[i]);
        }
    printf("\n");
}

*/


/*-----Write a program in C to count the total number of words in a string-----------*/

/*
#include <stdio.h>
#include <string.h>
 
void main()
{
    char s[200];
    int count = 0, i;
 
    printf("Enter the string:\n");
    //scanf("%[^\n]s", s);
   // scanf("%s", s);
   fgets(s, 20, stdin);
    printf("%s", s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ' && s[i+1] != ' ')
            count++;    
    }
    printf("Number of words in given string are: %d\n", count + 1);
}*/






/*Program to calculate the vowels and consonants------------------------------------*/
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define str_size 100 //Declare the maximum size of the string

void main()
{
    char str[str_size];
    int i, len, vowel, cons;
	
       printf("\n\nCount total number of vowel or consonant :\n");
       printf("----------------------------------------------\n"); 	
       printf("Input the string : ");
       fgets(str, sizeof str, stdin);	

    vowel = 0;
    cons = 0;
    len = strlen(str);

    for(i=0; i<len; i++)
    {

        if(str[i] =='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            vowel++;
        }
        else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            cons++;
        }
    }
    printf("\nThe total number of vowel in the string is : %d\n", vowel);
    printf("The total number of consonant in the string is : %d\n\n", cons);
}*/



/*Program to extract the substring from a string---------------------------------------------------*/


#include <stdio.h>
void main() 
{
   char str[100], sstr[100];
   int pos, l, c = 0;
   
       printf("\n\nExtract a substring from a given string:\n");
       printf("--------------------------------------------\n");  
 
       printf("Input the string : ");
       fgets(str, sizeof str, stdin);
 
   printf("Input the position to start extraction :");
   scanf("%d", &pos);
   
   printf("Input the length of substring :");
   scanf("%d", &l);
 
   while (c < l) 
   {
      sstr[c] = str[pos+c-1];
      c++;
   }
   sstr[c] = '\0';
 
   printf("The substring retrieve from the string is :  %s\n", sstr);
 }








