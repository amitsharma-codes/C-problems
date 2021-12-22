#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	int a[20][10],highest=0,sub;
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
	printf("Enter the subject code to find the highest\n");scanf("%d",&sub);
	for(int i=0;i<students;i++)
		if(highest<a[i][sub])
			highest=a[i][sub];
	for(int i=0;i<students;i++)
		if(highest==a[i][sub])
			printf("The student %d scored highest with %d marks\n",i,a[i][sub]); 
}
