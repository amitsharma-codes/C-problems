#include<stdio.h>
struct A{
	int a1;
	float a2;
};
struct B{
	char b1[20];
	char *b2;        //this is 4 bytes on this machine(raspberry pi)
};
/*struct *B{

	char b1[20];
	char *b2;        //this is 4 bytes on this machine(raspberry pi)
};*/

struct nest{
	struct A a;
	struct B *b;
	double c;
};
int main()
{
	struct B v={"Vector","India"};
	struct nest var = {{24,24.4},&v,56.89};
	printf("%lu\n",sizeof(var));
	struct nest *p=&var;
printf("%d..%f..%s..%s..%lf\n",var.a.a1,var.a.a2,var.b->b1,var.b->b2,var.c);
printf("%d..%f..%s..%s..%lf\n",p->a.a1,p->a.a2,p->b->b1,p->b->b2,p->c);
}
