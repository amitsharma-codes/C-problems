#include<stdio.h>
#include<string.h>
int main()
{
	char s1[30],s2[10],*p,s3[10]={0};
	gets(s1);
	gets(s2);
	p=strstr(s1,s2);
	for(int i=0;i<strlen(s2);i++)
		s3[i]=p[i];
	printf("%s\n",s3);
}
