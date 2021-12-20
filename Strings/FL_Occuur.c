#include<stdio.h>
#include<string.h>
int findIndex_r(char*p,char*q);
int findIndex_f(char*p,char*q);
int main()
{
	char s1[30],s2[10];int p;
	gets(s1);gets(s2);
	p=findIndex_r(s1,s2);
	if(p)
		printf("Last occurence found at index %d\n",p);
	else{
		printf("Not found\n");return 0;}	
	p=findIndex_f(s1,s2);
	if(p)
		printf("First occurence found at index %d\n",p);
	else
		printf("Not found\n");

}
int findIndex_f(char*p,char*q)
{
	int i=0,m=strlen(q),count=0,j=0;
	for(;i<strlen(p);i++)
	{
		if(p[i]==q[j])
		{
			count++;
			j++;
			if(count==m)
				return i-m+1;
		}
		else {count=0;j=0;}
	}
	return 0;
}
int findIndex_r(char*p,char*q)
{
	int i=strlen(p),m=strlen(q),count=0,j;
	j=m-1;
	for(;i>=0;i--)
	{
		if(p[i]==q[j])
		{
			count++;
			j--;
			if(count==m)
				return i;
		}
		else {count=0;j=m-1;}
	}
	return 0;
}
