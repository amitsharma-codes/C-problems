#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
void input(int*,int,int,int);
void print(int*,int);
int cntPrime(int*,int,int*);
int main()
{
	int st[40],locations[40],n,max,min;
	scanf("%d%d",&min,&max);
	input(st,40,max,min);
	print(st,40);
	printf("The no. of primes are %d\n",n=cntPrime(st,40,locations));
	print(locations,n);
}
int testRepeating(int *p,int n)
{
	for(int i=0;i<n;i++)
		if(p[i]==p[n])
			return 1;
	return 0;
}
void input(int *p,int n,int max,int min)
{
	srand(getpid());
	for(int i=0;i<n;i++)
	{
		p[i]=rand()%(max-min) + min; 
		if(testRepeating(p,i))
			i--;
	}
}
void print(int *p,int n)
{
	for(int i=0;i<n;i++)
		printf("%d ",p[i]);
	printf("\n");
}
int isPrime(int n)
{
	if(n==1 || n==0)
		return 0;
	for(int i=2;i<=n/2;i++)
		if((n%i)==0)
			return 0;
       return 1;	
}
int cntPrime(int *p,int n, int *Locations)
{
	int count=0;
	for(int i=0;i<n;i++)
		if(isPrime(p[i]))
		{
			count++;
			Locations[count-1]=i;
		}
	return count;
}
