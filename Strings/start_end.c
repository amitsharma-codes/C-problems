#include<stdio.h>
#include<string.h>
int start(char*p,char*q);
int end(char*p,char*q);
int main()
{
	char s1[30],s2[10];int p;
	gets(s1);gets(s2);
	p=end(s1,s2);
	if(p)
		printf("Last occurence found\n");
	else
		printf("Last occurence not found\n");	
	p=start(s1,s2);
	if(p)
		printf("First occurence found\n");
	else
		printf("First occurence not found\n");

}
int start(char*p,char*q)
{
	int i=0,m=strlen(q),count=0,j=0;
	for(;p[i]!=' ';i++)
	{
		if(p[i]==q[j])
		{
			count++;
			j++;
			if(count==m)
				return 1;
		}
	}
	return 0;
}
int end(char*p,char*q)
{
	int i=strlen(p),m=strlen(q),count=0,j;
	j=m-1;
	for(;p[i]!=' ';i--)
	{
		if(p[i]==q[j])
		{
			count++;
			j--;
			if(count==m)
				return 1;
		}
	}
	return 0;
}
