#include<stdio.h>
#include<string.h>
int main()
{
	char str[30];
	int count;
	gets(str);
	char *p;
	char i,j;
	for(p=str,i=0;p[i];i++)
	{
		for(j=0;p[j];j++)
		{
			if(p[i]==p[j])
				count++;
			if(count==2)
				memmove(p+j,p+j+1,strlen(p+j));
		}
	}
	printf("%s",str);
}
