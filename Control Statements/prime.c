#include<stdio.h>
int main()
{
	int p,i;
	for(i=1;i<=99;i+=2)
	{
		for(p=3;p<=i/2;p++)
		{
			if(i%p==0)
				break;
		}
		if(p>i/2)
			printf("%d ",i);
	}
	printf("\n");
}
