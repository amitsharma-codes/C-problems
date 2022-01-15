#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
void bubble_sort(int *a,int n);
int* dub_sorted(int* a,int *n);
int main()
{
	int *a, n;
	srand(getpid());
	n=rand()%10+10;
	a=malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
		a[i]=rand()%10;
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");	
	bubble_sort(a,n);
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	a=dub_sorted(a,&n);
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
int* dub_sorted(int* a,int *n)
{
	for(int i=0;i<*n-1;i++)
	{
		if(a[i]==a[i+1])
		{
			memmove(a+i,a+i+1,(*n-i-1)*sizeof(int));
			a=realloc(a,(*n-1)*sizeof(int));
			--*n;
			i--;
		}
	}
	return a;
}
void bubble_sort(int *a,int n)
{
	int temp;
	for(int i=0;i<n-1;i++)
	{
		int count=0;
		for(int j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				count++;
			}
		}
		if(count==0)
			break;
	}
}
