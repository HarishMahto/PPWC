/*
* Counting occurrences of a letter in a string.
*/

#include <stdio.h>
int count(char ch, const char *str);
int
main(void)
{
char str[80];
char target;
int my_count;
/* string to be processed */
/* character counted */
printf("Enter up to 79 characters.\n");
fgets(str, 79, stdin); /* read in the string */

printf("Enter the character you want to count: ");
scanf("%c", &target);
my_count = count(target, str);
printf("The number of occurrences of %c in\n\"%s\"\nis %d\n", target, str, my_count);

return (0);
}
/*
* Counts the number of times ch occurs in string str.
* Pre: Letter ch and string str are defined.
*/
int count(char ch, const char *str)
{
int ans;
if (str[0] == '\0')

ans = 0;
else

if (ch == str[0]) 
ans = 1 + count(ch, &str[1]);
else

ans = count(ch, &str[1]);

return (ans);
}
