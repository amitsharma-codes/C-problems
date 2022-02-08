#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void sort(char (*p)[81]);
int main(int argc,char *argv[])
{
	FILE *fp;
	int i=0,j=0;
	char (*buf)[81],ch;
	if(argc<2)
	{
		printf("invalid arguments\n");
		return 0;
	}
	fp=fopen(argv[1],"r");
	buf=realloc(buf,sizeof(char)*81);
	while(ch=fgetc(fp)&&feof(fp))
	{
	printf("%s",buf[0]);
		if(ch=='\n')
		{
			buf[i][j]='\0';
			i++;
			j=0;
			buf=realloc(buf,i*sizeof(char)*81);
		}
		else
		{
		buf[i][j]=ch;
		j++;
		}
	printf("%s",buf[0]);
	}
	printf("%s",buf[0]);
}
void sort(char (*p)[81])
{
	char temp[81];int cols =sizeof(p[0])/sizeof(p[0][0]);
	int choice,count;
	printf("Enter the choice for\nsort by a-z: 1\nsort by size: 2\n");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:

	/* Selection SORT by a-z */

	for(int i=0;i<count-1;i++)
	{
		for(int j=0;j<count-1-i;j++)
		{
			if(strcmp(p[j],p[j+1])>1)
			{
				strcpy(temp,p[j]);
				strcpy(p[j],p[j+1]);
				strcpy(p[j+1],temp);
			}
		}
	}
	break;

	case 2:

	/* Selection SORT by size */

	for(int i=0;i<count-1;i++)
		for(int j=0;j<count-1-i;j++)
			if(strlen(p[i])>strlen(p[j]))
			{	
			strcpy(temp,p[j]);
			strcpy(p[j],p[j+1]);
			strcpy(p[j+1],temp);
			}
	break;
	}
}
