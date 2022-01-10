#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void bubble_sort(int *p,int n);
int main()
{
	int highest=0,second=0,*a,n;
	srand(getpid());
	n=rand()%81+20;
	a=malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
		a[i]=rand()%1001;
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	for(int i=0;i<n;i++)
		if(highest<a[i])
			highest=a[i];
	for(int i=0;i<n;i++)
		if((a[i]<highest)&&(a[i]>second))
			second=a[i];
	bubble_sort(a,n);
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	printf("The 2nd largest element is  %d\n",second);
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

