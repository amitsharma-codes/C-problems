#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
int* distinct(int *p,int* n);
int main()
{
	int *a,n;
	srand(getpid());
	n=rand()%10+20;
	a=malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
		a[i]=rand()%10;
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	a=distinct(a,&n);
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
int* distinct(int *p,int* n)
{
	int count=0;
	for(int i=0;i<*n;i++)
	{
		for(int j=0;j<*n;j++)
		{
			if((i!=j) && (p[i]==p[j]))
			{
				if(*n==j)
				{	
					p=realloc(p,(*n-1)*sizeof(int));
					j--;
					i--;
					--*n;
				}
				else
				{
				memmove(p+i,p+i+1,(*n-i-1)*sizeof(int));
				p=realloc(p,(*n-1)*sizeof(int));
				j--;
				i--;
				--*n;
				}
			}
		}	
	}
	return p;
}
