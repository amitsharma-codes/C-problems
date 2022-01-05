#include<stdio.h>
#include<stdio_ext.h>
int count;
void add(char(*)[3][10],int);
void print(char(*)[3][10]);
int main()
{
	char db[10][3][10];
	int size=sizeof(db)/sizeof(db[0]);
	char choice;
	while(1)
	{
	__fpurge(stdin);
	printf("==========MENU==========\n");
	printf("Enter 'a' for adding an entry\n");
	printf("Enter 'p' for printing the entries\n");
	printf("Enter 'q' for quiting from the DataBase\n");
	printf("Enter the choice\n");
	choice=getchar();
	switch(choice)
	{
		case 'a':add(db,size);break;
		case 'p':print(db);break;
		case 'q':return 0;break;
	}
	}
}
void add(char(*p)[3][10],int size)
{
	if(count<size)
	{
	printf("Enter the Roll No.\n");
	scanf("%s",p[count][0]);//Address of Roll of 1D Array in one entry
	printf("Enter the Name\n");
	scanf("%s",p[count][1]);//Address of Name of 1D Array in one entry
	printf("Enter the marks\n");
	scanf("%s",p[count][2]);//Address of Marks of 1D Array in one entry
	count++;
	}
	else
		printf("DataBase is full\n");
}
void print(char(*p)[3][10])
{
	for(int i=0;i<count;i++)
	{
		for(int j=0;j<3;j++)
			printf("%s ",p[i][j]);
		printf("\n");
	}
}
