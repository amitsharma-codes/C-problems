#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void permute(char *p,int l,int r);
int main()
{
	char *a=NULL;int i=0;
	do
	{
		a=realloc(a,(i+1)*sizeof(*a));
		a[i]=getchar();
	}while(a[i++]!='\n');
	a[i-1]='\0';
	a=realloc(a,(i-1)*sizeof(*a));
//	printf("%s\n",a);
	permute(a,0,strlen(a)-1);
}
void swap(char *x,char *y)
{
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
int palindrome(char *p)
{
	int i,j;
	j=strlen(p)-1;
	for(i=0;i<j;i++,j--)
		if(p[i]==p[j]) return 1;
	return 0;
}
int Norepetion(char* p)
{
	static char *palindromes;

}
void permute(char *p,int l,int r)
{
	if(l==r)
	{
		if(palindrome(p)==1)
			if(Norepetion(p))
				printf("%s\n",p);
	}
	else
	{
		for(int  i=l;i<=r;i++)
		{
			swap(p+l,p+i);
			permute(p,l+1,r);
			swap(p+l,p+i);
		}
	}
}
