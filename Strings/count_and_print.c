#include<stdio.h>
#include<ctype.h>
#include<string.h>
void countandPrint(char* s);
int main()
{
	char str[30];
	gets(str);
	countandPrint(str);
}
void countandPrint(char* s)
{
	int count=0;char pr[10];
	for(int i=0,j=0;i<strlen(s)+1;i++)
	{
		if(isalpha(s[i]))
			if((s[i+1]==' ')||(s[i+1]=='\0'))
				count++;
		if(isalpha(s[i]))
			pr[j++]=s[i];
		else if(isalpha(s[i-1]) && ((s[i]==' ')||(s[i]=='\0')))
		{
			pr[j]='\0';
			printf("%s\n",pr);j=0;
		}
	}
	printf("Count is %d\n",count);
}
