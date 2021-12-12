#include<stdio.h>
int main()
{
	int rev=0,num,number;
	scanf("%d",&num);
	number=num;
	if(number>0)
	{
		printf("more\n");
		for(;number;number/=10)
			rev= rev*10 + number%10;
	}
	else if(number<0)
	{
		printf("less\n");
		for(;number;number/=10)
			rev= rev*10 - number%10;
	}
	if(rev == num)
		printf("%d %d is a palindrome\n",rev,rev*2);
	else
		printf("%d is not a palindrome\n",rev);
}
