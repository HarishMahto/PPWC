// Program to find the sum of digits of the number entered

#include<stdio.h>
int non_rec(int num);
int rec(int num);

int main(){
int num;
printf("Enter the number: ");
scanf("%d", &num);

printf("The answer with non_recursive is: %d\n", non_rec(num));
printf("The answer with recursive is: %d\n", rec(num));

return 0;
}

int non_rec(int num){

int res, ans = 0;
while(num != 0){
	res = num%10;
	ans = ans + res;
	num = num/10;
	}
	
return ans;
}


int rec(int num){
int ans1;
 if (num ==0)
     return 0;
     
   else
   {
       ans1 = num%10 + rec(num/10);
       return ans1;
       }
      }
