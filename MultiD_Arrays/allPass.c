#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	int a[20][10],pass[20]={0},highest=0,k=0;
	int students=sizeof(a)/sizeof(a[0]);
	int marks=sizeof(a[0])/sizeof(a[0][0]);
	srand(getpid());
	for(int i=0;i<students;i++)
		for(int j=0;j<marks;j++)
			a[i][j]=rand()%101;
	for(int i=0;i<students;i++)
	{
		printf("Student: %d: marks:",i);
		for(int j=0;j<marks;j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
	for(int i=0;i<students;i++)
		for(int j=0;j<marks;j++)
		{
			if(a[i][j]>40);
			else break;
			if(j==marks-1)pass[k++]=i;
		}
	for(int i=0;i<k;i++)
		printf("the student %d passed all the subjects\n",pass[i]);
}
