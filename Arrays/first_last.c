#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int firstOcc(int*,int,int);
int lastOcc(int*,int,int);
void sort(int*,int);
int main()
{
	int *a,n;
	srand(getpid());
	n=rand()%10+10;
	a=malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
		a[i]=rand()%10;
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	sort(a,n);
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
printf("The first occurence of above digit is %d\n",firstOcc(a,n,rand()%10));
printf("The last occurence of above digit is %d\n",lastOcc(a,n,rand()%10));
}
void sort(int*p,int n)
{
int temp;
for(int i=0;i<n-1;i++)
for(int j=0;j<n-1-i;j++)
if(p[j]>p[j+1])
{
temp=p[j];
p[j]=p[j+1];
p[j+1]=temp;
}
}
int binSearch(int *p,int s,int n)
{
int low,up=s-1,mid;
while(low<=up)
{
mid=(low+up)/2;
if(n<p[mid])
	up=mid-1;
else if(n>p[mid])
	low=mid+1;
else
	return mid;
}
return -1;
}
int firstOcc(int* p,int s,int n)
{
printf("The digit is %d\n",n);

int i;
i=binSearch(p,s,n);
if(i<=0)
	return i;
while(p[i]==p[i-1] && i)
	i--;
return i;
}
int lastOcc(int*p,int s,int n)
{
printf("The digit is %d\n",n);
int i;
i=binSearch(p,s,n);
if(i<=0)
	return i;
while(p[i]==p[i+1] && i!=n)
	i++;
return i;
}
