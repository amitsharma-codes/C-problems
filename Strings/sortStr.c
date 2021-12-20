#include<stdio.h>
void sort(char *p,unsigned long int n);
int main()
{
	char s[30];
	gets(s);
	sort(s,strlen(s)-1);
	puts(s);
}
void sort(char *p,unsigned long int n)
{
	int i,j;char temp;
	for(i=0;i<n;i++)
	for(j=i;j<n;j++)
		if(p[i]>p[j])
		{
			temp=p[i];
			p[i]=p[j];
			p[j]=temp;
		}
}
