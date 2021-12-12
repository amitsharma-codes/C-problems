#include<stdio.h>
int main()
{
	int rev,number;
	for(number=999;number<=9999;number++)
	{
		int temp = number;
		for(rev=0;temp;temp/=10)
			rev= rev*10 + temp%10;
		if(rev == number)
			printf("%d ",number);
	}
}
