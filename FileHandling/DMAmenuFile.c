#include<stdio.h>
#include<stdlib.h>
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
int main()
{
	char (*db)[20]=NULL;
	char choice;
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
			case 'q': return 0;
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
	if(count==max)
	{printf("Memory full\n");return;}
	printf("Enter a name\n");
	__fpurge(stdin);
	p=realloc(p,20);
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

	for(int i=0;i<count;i++)
		for(int j=i;j<count;j++)
			if(strcmp(p[i],p[j])>1)
			{
				strncpy(temp,p[i],cols);
				strncpy(p[i],p[j],cols);
				strncpy(p[j],temp,cols);
			}
	break;

	case 2:

	/* Selection SORT by size */

	for(int i=0;i<count;i++)
		for(int j=i;j<count;j++)
			if(strlen(p[i])>strlen(p[j]))
			{
				strncpy(temp,p[i],cols);
				strncpy(p[i],p[j],cols);
				strncpy(p[j],temp,cols);
			}
	break;
	}
}
