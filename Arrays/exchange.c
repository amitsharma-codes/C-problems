#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void exchange(int *const p,int n);
int main()
{
	int s[19];
	int const n=sizeof(s)/sizeof(int);
	printf("%d\n",n);
	/*scanf("%d",&n);
	s=(int*)malloc(n*sizeof(int));*/
	srand(getpid());
	for(int i=0;i<n;i++)
		s[i]=rand()%101;
	for(int i=0;i<n;i++)
		printf("%d ",s[i]);
	printf("\n");
	exchange(s,n);
	for(int i=0;i<n;i++)
		printf("%d ",s[i]);
	printf("\n");
	printf("%d\n",n);
}
void exchange(int *const p,int n)
{
	int temp;
/*	if(n%2==1)
		n=n-1;*/
	for(int i=0;i<n;i+=2)
	{
		temp=p[i];
		p[i]=p[i+1];
		p[i+1]=temp;
	}
}
