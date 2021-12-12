#include<stdio.h>
int main()
{
	int n,i,j;
	for(i=0;i<10;i++)
	{
AGAIN:
		scanf("%d",&n);
		if(n>10 && n<50)
		{
			for(j=0;j<n;j++)
				printf("= ");
			printf("\n");
		}
		else
		{
			printf("ERROR 404: Enter the number within range\n");
			goto AGAIN;
		}
	}
}
