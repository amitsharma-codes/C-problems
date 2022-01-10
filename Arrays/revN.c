#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void reverse(int *p,int r);
int main()
{
	int *a,n,r;
	srand(getpid());
	n=rand()%81+20;
	r=rand()%101;
	printf("The no. of elements are being reversed are: %d\n",r);
	a=malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
		a[i]=rand()%1010;
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	reverse(a,r);
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
void reverse(int *p,int r)
{
	int temp;
	for(int i=0,j=r-1;i<j;i++,j--)
	{
		temp=p[i];
		p[i]=p[j];
		p[j]=temp;
	}
}
