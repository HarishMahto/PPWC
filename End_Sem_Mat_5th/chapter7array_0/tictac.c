#include<stdio.h>

int filled(char ttt_brd[][3]);
int main(){
char ttt_brd[3][3];

 
int r, c;
for (r = 0; r < 3; ++r){
   for (c = 0; c < 3; ++c){
   ttt_brd[r][c] ='x';
}
}
printf("The value returned is: %d\n", filled(ttt_brd));
}

int filled(char ttt_brd[3][3]) 
{
int r, c, ans; 

ans = 1; 

for (r = 0; r < 3; ++r)
for (c = 0; c < 3; ++c)
if (ttt_brd[r][c] == ' ')
ans = 0; 

return (ans);
}
