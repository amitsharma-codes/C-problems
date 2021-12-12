#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void print(int *p,int n);
void sort(int *p,int n);
int main()
{
	int arr[1000],n;
	scanf("%d",&n);
	srand(getpid());
	for(int i=0;i<n;i++)
		arr[i]=rand()%10001;
	print(arr,n);
	sort(arr,n);
	print(arr,n);
}
void sort(int *p,int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	for(j=i;j<n;j++)
		if(p[i]>p[j])
		{
			temp=p[i];
			p[i]=p[j];
			p[j]=temp;
		}
}
void print(int *p,int n)
{	
	for(int i=0;i<n;i++)
		printf("%d. %d \n",i+1,p[i]);
}
