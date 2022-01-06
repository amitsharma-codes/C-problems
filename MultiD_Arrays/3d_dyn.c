#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>
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
		case 'd':db=delete(db);break;
		case 'q':return 0;break;
		default :printf("Invalid Choice\n");
	}
	}
}
void *add(char ***p)
{
	p = realloc(p,(count+1)*sizeof(char **));
	p[count]=calloc(3,sizeof(char *));
	for(int i=0;i<3;i++)
	{
		p[count][i]=getstring();
	}
	count++;
	return p;
}
void print(char***p)
{
	for(int i=0;i<count;i++)
	{
		for(int j=0;j<3;j++)
			printf("%s ",p[i][j]);
		printf("\n");
	}
}
void* delete(char ***p)
{
	int d;
	printf("Enter the entry no. to delete\n");
	scanf("%d",&d);
	if(d<size)
	{
	memmove(p+d,p+d+1,(count-d-1)*sizeof(*p));
	count--;
	}
	else
		printf("Out of range\n");
	return p;
}	
