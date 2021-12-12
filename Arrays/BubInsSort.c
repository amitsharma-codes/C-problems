#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void print(int *p,int n);
void bubbleSort(int *p,int n);
void insertionSort(int *p,int n);
int main()
{
	int arr[1000],n;
	scanf("%d",&n);
	srand(getpid());
	for(int i=0;i<n;i++)
		arr[i]=rand()%10001;
	print(arr,n);
	bubbleSort(arr,n);
	print(arr,n);
}
void bubbleSort(int *p,int n)
{
	int pass,change,temp,xchanges;
	for(pass=0;pass<n-1;pass++)
	{
		xchanges =0;
		for(change=0;change<(n-1)-pass;change++)
			if(p[change]>p[change+1])
			{
				xchanges++;
				temp=p[change];
				p[change]=p[change+1];
				p[change+1]=temp;
			}
		if(xchanges==0)
			break;
	}
}
void insertionSort(int *p,int n)
{

}
void print(int *p,int n)
{	
	for(int i=0;i<n;i++)
		printf("%d. %d \n",i+1,p[i]);
}
