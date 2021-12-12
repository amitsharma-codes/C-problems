#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int linearSearch(int * arr,int n,int item);
int main()
{
	int arr[1000000],item,index,n,max;
	printf("Enter the no. of elements\n");
	scanf("%d",&n);
	printf("Enter the item to be searched and max\n");
	scanf("%d%d",&item,&max);
	srand(getpid());
	for(int i=0;i<n;i++)
		arr[i]=rand()%max;
	if(index=linearSearch(arr,n,item))
		printf("The element is present in the array at the index %d\n",index);
	else
		printf("The element is not present in the array\n");
}
int linearSearch(int * arr,int n,int item)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		printf("%d ",count++);
		if(arr[i]==item)
			return i;
	}
	return 0;
}
