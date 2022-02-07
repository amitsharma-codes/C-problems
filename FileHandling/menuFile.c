#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>
#include<ctype.h>
const int max=10;
int count=0;
void printmenu();
void print(char (*p)[20]);
void input(char (*p)[20]);
void delete(char (*p)[20]);
void sort(char (*p)[20]);
void quit(char (*p)[20],char* filename);
int main(int argc,char *argv[])
{
	char db[10][20]={0};
	char choice;
	FILE *fp;
	char ch;
	int i=0;
	if(argc<2)
	{
		printf("invalid arguments\n");
		return 0;
	}
	fp=fopen(argv[1],"r");
	while((ch=fgetc(fp))&&(!feof(fp)))
	{
		db[count][i]=ch;
		i++;
		if(ch=='\n')
		{
			db[count][i-1]='\0';
			count++;
			i=0;
		}
	}
	while(1)
	{
		printmenu();
		__fpurge(stdin);
		scanf("%c",&choice);
		switch(choice)
		{
			case 'i': input(db);break;
			case 'p': print(db);break;
			case 'd': delete(db);break;
			case 's': sort(db);break;
			case 'q': quit(db,argv[1]);return 0;
			default: printf("Invalid entry\n");
		}
	}
}
void printmenu()
{
	printf("\n \t MENU\n");
	printf(" \tEnter i for: input\n \tEnter p for: print\n");
	printf(" \tEnter d for: delete\n \tEnter s for: sort\n");
	printf(" \tEnter q for: quit\n");printf(" \tEnter your choice:\n");
}
void print(char (*p)[20])
{
	for(int i=0;i<count;i++)
		printf("Name[%d]:%s\n",i,p[i]);
	return;
}
void input(char (*p)[20])
{
	printf("Enter a name\n");
	__fpurge(stdin);
	gets(p[count]);
	count++;
	return;
}
void delete(char (*p)[20])
{
	int d;
	int cols =sizeof(p[0])/sizeof(p[0][0]);
	printf("Enter the index you want to delete:");scanf("%d",&d);
	memmove(p+d,p+d+1,((max-1)-d)*cols);
	count--;
}
void sort(char (*p)[20])
{
	char temp[20];int cols =sizeof(p[0])/sizeof(p[0][0]);
	int choice;
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
void quit(char (*p)[20],char* filename)
{
	char choice;
	FILE *fp;
AGAIN:
	printf("Save karle BSDK y/n??\n");
	__fpurge(stdin);
	gets(p[count]);
	scanf("%c",&choice);
	switch(choice)
	{
		case 'y':
			fp=fopen(filename,"w");
			for(int i=0;i<count;i++)
			{
				fputs(p[i],fp);
				fputc('\n',fp);
			}
			break;
		case 'n':
			break;
		default:
			printf("Choice is invaid\n");
			goto AGAIN;
	}
}
