#include<stdio.h>
float convert(float,char);
int main()
{
	float len; char ch;
	ch=getchar();
	scanf("%f",&len);
	printf("%f \n",convert(len,ch));
}
float convert(float f,char choice)
{
	printf("%c\n",choice);
	float r;
	switch(choice)
	{
		case'i':
		       	r= f*2.5;break;
		case'c':
			r= f/2.5;
	}
	return r;
}
