#include<stdio.h>
#include<string.h>
void PrintFrequencies(char*);
int main()
{
	char s[30]={0};
	gets(s);
	PrintFrequencies(s);
}
void PrintFrequencies(char*p)
{
	int j=0,i,count=0,n=strlen(p);char ch;
	while(j<n)
	{
		if(p[j])
		{
			ch=p[j];
		for(i=0;p[i];i++)
			if(p[i]==p[j])
			{
				count++;
				p[i]=0;
			}
		}
		printf("The frequency of %c is %d\n",ch,count);
		count=0;
		j++;
	}
}
