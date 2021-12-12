#include<stdio.h>
void main()
{ 
	/*format for integer input and output*/
	int a,b;
	scanf("%1d %2d",&a,&b);
	printf("%2d,%3d\n",a,b);

	/*format for floating point numeric input and output*/
	float f,g;
	scanf("%4f %4f",&f,&g);
	printf("%4.5f %4.6f \n",f,g);
	/*format for a string input and output*/
       char str[8];
       scanf("%3s",&str);
       printf("%4s \n",str);       
}
