#include<stdio.h>
#include<string.h>
char* strstr_r(char*p,char*q);
int main()
{
	char s1[30],s2[10],*p;
	gets(s1);gets(s2);
	p=strstr_r(s1,s2);
	if(p)
		printf("Found at index %d\n",p-s1);
	else
		printf("Not found\n");
}
char* strstr_r(char*p,char*q)
{
	int n=strlen(p),m=strlen(q),count=0,j;
	p=p+n;j=m-1;
	for(;n>=0;p--,n--)
	{
		if(*p==q[j])
		{
			count++;
			j--;
			if(count==m)
				return p;
		}
		else {count=0;j=m-1;}
	}
	return NULL;
}
