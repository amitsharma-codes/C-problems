#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	int *a,n,i,j;
	srand(getpid());
	n=rand()%10+10;
	a=malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
		a[i]=rand()%10;
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
			if(a[i]<=a[j])break;
		if(j==n)
			printf("%d ",a[i]);
	}
	printf("\n");
}
