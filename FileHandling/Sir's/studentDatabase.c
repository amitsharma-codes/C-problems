//a database app to store student records...
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int flag=0;//to warn to user about data saving into disk..
struct student
{
	char name[20];
	int roll;
	float mark;
}*db=NULL;

int cnt=0;
void printMenu(void)
{
	printf("\nMENU\n");
	printf("--------\n");
	printf("i:input\np:print\nq:quit\n");
	printf("f:find\nS:save\nd:delete\n");
	printf("ENter your choice:");
}


void input()
{//whenever called, add a record to the existing database.
	
	db=realloc(db,(cnt+1)*sizeof(struct student));

	printf("Enter name:");
__fpurge(stdin);
	gets(db[cnt].name);
	printf("Enter mark");
	scanf("%f",&db[cnt].mark);
	printf("enter roll:");
	scanf("%d",&((db+cnt)->roll));

	cnt++;

flag=0;
}
void print()
{
	int i;
	for(i=0;i<cnt;i++)
printf("record %d: %20s %d %0.2f\n",i,db[i].name,db[i].roll,db[i].mark);
}

void delete()
{
	int i;
	int roll2Delete;
	printf("Enter roll to delete:");
	scanf("%d",&roll2Delete);
for(i=0;i<cnt;i++)
	if(db[i].roll == roll2Delete)
		break;


if(i==cnt) { printf("Error: record not found\n"); return;}

memmove(db+i,db+i+1,(cnt-i-1)*sizeof(struct student));
cnt--;

db=realloc(db,cnt*sizeof(struct student));
if(cnt==0)  db=NULL;

flag=0;

}


void save()
{
////should send the dyn.memory.blocks(array of structures) into a datafile.
//datafile named    student.dat
	FILE *fp;
	fp=fopen("student.dat","w");
	fwrite(db,sizeof(struct student),cnt,fp);
	fclose(fp);
	flag=1;
}
void syncFile()
{
FILE *fp;
fp=fopen("student.dat","r");
if(fp==NULL)  return ;
//in file named student.dat  few records(structures ) are present..   
//bring all the records into dyn.array...
fseek(fp,0,2);
cnt=ftell(fp)/sizeof(struct student);
db=malloc(cnt*sizeof(struct student));//db=calloc(cnt,sizeof(struct student));
fseek(fp,0,0);//rewind(fp);
fread(db,sizeof(struct student),cnt,fp);
fclose(fp);
}



int main()
{
	char choice;
syncFile();//reading the records from student.dat... and making the data ready in dyn.memory.

	while(1)
	{
		printMenu();
		__fpurge(stdin);
		scanf("%c",&choice);
		switch(choice)
		{
			case 'i':input(); break;
			case 'd':delete();break;
			case 'q':if(flag==0) {
		printf("Warning: you have not saved records..do u want to save now:(Y/N)\n");__fpurge(stdin); choice=getchar();if(choice=='Y') save();
				}
				 return 0;
			case 'p':print();break;
			case 'S':save();break;
			default: printf("Error:invalid entry\n");
		}//switch
	}
}

