#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>
#include<string.h>
struct student{
	unsigned int roll;
	char *name;
	float mark;
};
int count=0;
void input(struct student *p);
void print(struct student *p);
void delete(struct student *p);
void sort(struct student *p);
void printMenu()
{
	printf("Enter the choice 'i' for input:\n");
	printf("Enter the choice 'p' for print:\n");
	printf("Enter the choice 'd' for delete:\n");
	printf("Enter the choice 's' for sorting:\n");
	printf("Enter the choice 'q' for quit:\n");
}
int main()
{
	struct student db[10];char choice;
	while(1)
	{
		printMenu();
		__fpurge(stdin);
		scanf("%c",&choice);
		switch(choice)
		{
			case 'i': input(db);break;
			case 'p': print(db);break;
			case 'd': delete(db);break;
			case 's': sort(db);break;
			case 'q': return 1;
			default :printf("Invalid entry\n");
		}
	}
}
void sort(struct student *p)
{
	char choice='r';int i,j;
//Again:
	printf("Enter the method for sorting\n"
		"Sort by roll no. 'r'\n"
		"Sort by name     'n'\n"
		"Sort by marks    'm'\n");
	__fpurge(stdin);
	scanf("%c",&choice);
	struct student temp;
	switch(choice)
	{
		case 'r':
			for(i=0;i<count-1;i++)
				for(j=0;j<count-i-i;j++)
					if(p[j].roll>p[j+1].roll)
					{
						temp=p[j];
						p[j]=p[j+1];
						p[j+1]=temp;
					}	
		case 'n':
			for(i=0;i<count-1;i++)
				for(j=0;j<count-i-i;j++)
					if(strcmp(p[j].name,p[j+1].name)>0)
					{
						temp=p[j];
						p[j]=p[j+1];
						p[j+1]=temp;
					}
		case 'm':
			for(i=0;i<count-1;i++)
				for(j=0;j<count-i-i;j++)
					if(p[j].mark>p[j+1].mark)
					{
						temp=p[j];
						p[j]=p[j+1];
						p[j+1]=temp;
					}
		default: printf("Invalid entry\n");
//			 goto Again;
	}
}
char* getstring()
{
	char *p=NULL;int i=0;
	__fpurge(stdin);
	do{
		p=realloc(p,(i+1)*sizeof(char));
		p[i]=getchar();
	}while(p[i++]!='\n');
	p[i-1]='\0';
	return p;
}
void input(struct student *p)
{
	if(count>=10)
	{
		printf("The database is full\n");
		return;
	}
	printf("Enter the roll no.\n");
	scanf("%d",&p[count].roll);
	printf("Enter the name \n");
	p[count].name=getstring();
	printf("Enter the marks\n");
	scanf("%f",&p[count].mark);
	count++;
	return;
}
void print(struct student *p)
{
	for(int i=0;i<count;i++)
	{
		printf("Roll no: %d\n",p[i].roll);
		printf("Name: %s\n",p[i].name);
		printf("Marks: %f\n",p[i].mark);
	}
}
void delete(struct student *p)
{
	int roll,i;
	printf("enter the roll no. to delete the entry\n");
	scanf("%d",&roll);
	for(i=0;i<count;i++)
		if(p[i].roll==roll)
		{
			roll=i;
			break;
		}
	if(i==count)
		printf("invalid roll no.\n");
	else
	{
		memmove(p+roll,p+roll+1,(count-roll-1)*sizeof(p[0]));
		count--;
	}
}
