#include<stdio.h>
void displayBits(int x);
int main()
{
	int data;
	scanf("%d",&data);
	displayBits(data);
	for(int i=0,j=7;i<j;i++,j--)
	{
		if(((data>>i)&1) != ((data>>j)&1))
		{
			data = data^(1<<i);
			data = data^(1<<j);
		}
	}	
	for(int i=8,j=15;i<j;i++,j--)
	{
		if(((data>>i)&1) != ((data>>j)&1))
		{
			data = data^(1<<i);
			data = data^(1<<j);
		}
	}
	for(int i=16,j=23;i<j;i++,j--)
	{
		if(((data>>i)&1) != ((data>>j)&1))
		{
			data = data^(1<<i);
			data = data^(1<<j);
		}
	}	
	for(int i=24,j=31;i<j;i++,j--)
	{
		if(((data>>i)&1) != ((data>>j)&1))
		{
			data = data^(1<<i);
			data = data^(1<<j);
		}
	}
	displayBits(data);
}
void displayBits(int x)
{
	for(int i=31;i>-1;i--)
	{
		printf("%d",(x>>i)&1);
		if(i%4==0)
			printf(" ");
	}
	printf("\n");
}
