#include<stdio.h>
int main()
{
	int data,i,j;
	scanf("%d",&data);
	for(i=31;i>-1;i--)
		printf("%d",(data>>i)&1);
	printf("\n");
	for(i=0,j=31;i<j;i++,j--)
	{
		if(((data>>i)&1) != ((data>>j)&1))
		{
			data^=(1<<i);
			data^=(1<<j);
		}
	}
	for(i=31;i>-1;i--)
		printf("%d",(data>>i)&1);
	printf("\n");
	printf("%d\n",data);
}
