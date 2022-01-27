#include<stdio.h>
struct student
{
	int roll;
	char *name;
	float marks;
	struct {
		int day;int month;int year;
	}dob;
};
void print(struct student *p);
int main()
{
	struct student var={4,"AMIT",95.8,{15,11,1998}};
	printf("Roll no.: %d Name: %s Marks: %f\nDOB: %d-%d-%d\n",var.roll,var.name,var.marks,var.dob.day,var.dob.month,var.dob.year);
	print(&var);
}
void print(struct student *p)
{
printf("Roll no.: %d Name: %s Marks: %f\nDOB: %d-%d-%d\n",p->roll,p->name,p->marks,p->dob.day,p->dob.month,p->dob.year);
}
