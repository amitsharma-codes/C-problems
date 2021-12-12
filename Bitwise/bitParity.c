#include<stdio.h>
int parity(unsigned int data);
int main()
{
	int a;
	scanf("%d",&a);
	a = parity(a);
	printf("%d\n",a);
}
int parity(unsigned int data)
{
	int count=0;
	for(int i=0;i<32;i++)
		if((data>>i)&1)
			count++;
	if(count%2==1)
		return 1;
	else
		return 0;
}
