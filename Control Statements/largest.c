#include<stdio.h>
int main()
{
	int a[10],larg,i;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
		if(larg>a[i]);
		else
			larg=a[i];
	}
	printf("%d\n",larg);
}
