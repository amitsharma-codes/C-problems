#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void print(int *p,int n);
void sort(int *p,int n);
int binsearch(int *,int,int);
int main()
{
	int arr[1000000],n,item,index;
	printf("Enter the no. of elements and item to be searched\n");
	scanf("%d",&n);
	scanf("%d",&item);
	srand(getpid());
	for(int i=0;i<n;i++)
		arr[i]=rand()%31;
	print(arr,n);
	sort(arr,n);
	print(arr,n);
	index=binsearch(arr,n,item);
	if(index==-1)
		printf("The element is not present in the array\n");
	else
		printf("The element %d is present at %d\n",item,index);
}
void sort(int *p,int n)
{
	int i,j,temp,count=0;
	for(i=0;i<n;i++)
	for(j=i;j<n;j++)
	{
		//printf("%d ",count++);
		if(p[i]>p[j])
		{
			temp=p[i];
			p[i]=p[j];
			p[j]=temp;
		}
	}
}
void print(int *p,int n)
{	
	for(int i=0;i<n;i++)
		printf("%d. %4d \n",i,p[i]);
}
int binsearch(int *p,int n,int item)
{
	int low=0,up=n-1,mid,count=0;
	while(low<=up)
	{
		mid=(low+up)/2;
		//printf("%d ",count++);
		if(item>p[mid])
			low=mid+1;
		else if(item<p[mid])
			up=mid-1;
		else
			return mid;
	}
	return -1;
}
