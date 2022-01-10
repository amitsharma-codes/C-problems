#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void bubble_sort(int *p,int n);
int main()
{
	int n,*a;
	srand(getpid());
	n=rand()%81+20;
	a=malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
		a[i]=rand()%1001;
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	bubble_sort(a,n);
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	printf("The difference between the largest and the smallest element is  %d\n",a[n-1]-a[0]);
}
void bubble_sort(int *p,int n)
{
	int temp,count=0,i,j;
	for(i=n-1;i>0;i--)
	{
		for(j=0;j<i;j++)
			if(p[j]>p[j+1])
			{
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
				count++;
			}
		if(count==0)
			return;
		count=0;
	}
}
