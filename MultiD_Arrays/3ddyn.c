#include<stdio.h>
#include<stdio_ext.h>
#include<stdlib.h>
#include<string.h>
char*** add(char ***p);
void print(char ***p);
void delete(char ***p);
int count;
int main()
{
	char ***db=NULL;
	char choice;
	while(1)
	{
	__fpurge(stdin);
	printf("==========MENU==========\n");
	printf("Enter 'a' for adding an entry\n");
	printf("Enter 'p' for printing the entries\n");
	printf("Enter 'q' for quiting from the DataBase\n");
	printf("Enter 'd' for deleting an entry from the DataBase\n");
	printf("Enter the choice\n");
	choice=getchar();
	switch(choice)
	{
		case 'a':db=add(db);break;
		case 'p':print(db);break;
		case 'd':delete(db);break;
		case 'q':return 0;break;
		default :printf("Invalid Choice\n");
	}
	}
}
char* getstring()
{
	char *a=NULL;int i=0;
	do
	{
		a=realloc(a,(i+1)*sizeof(*a));
		a[i]=getchar();
	}while(a[i++]!='\n');
	a[i-1]='\0';
	a=realloc(a,(i-1)*sizeof(*a));
	return a;
}
char*** add(char ***p)
{
	__fpurge(stdin);
	p = (char***)realloc(p,(count+1)*sizeof(char **));
	p[count]=(char**)malloc(3*sizeof(char *));
	for(int i=0;i<3;i++)
	{
		p[count][i]=getstring();
	}
	count++;
	return p;
}
void print(char ***p)
{
	for(int i=0;i<count;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%s ",p[i][j]);
		}
		printf("\n");
	}
}
void delete(char ***p)
{
	int d;
	printf("Enter the entry no. to delete\n");
	scanf("%d",&d);
	for(int i=0;i<count;i++)
	if(d==i)
	{
	memmove(p+d,p+d+1,(count-d-1)*sizeof(*p));
	count--;
	}
}	
