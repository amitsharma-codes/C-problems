#include<stdio.h>
int main()
{
	int num,square=0;
	scanf("%d",&num);
	if(num==0)
		square=0;
	int temp=num;
	while(temp)
	{
		square += (temp%10)*(temp%10); 
		temp/=10;
	}
	printf("%d\n",square);
}
