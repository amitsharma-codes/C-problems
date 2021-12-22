#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	int a[20][10],total[20]={0},highest=0;
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
			printf("%d",a[i][j]);
		printf("\n");
	}
	for(int i=0;i<students;i++)
		for(int j=0;j<marks;j++)
			total[i]+=a[i][j];
	for(int i=0;i<students;i++)
		if(highest<total[i])
			highest=total[i];
	for(int i=0;i<students;i++)
		if(highest==total[i])
			printf("the student scored highest total is %d with %d total\n",i,total[i]); 


}
