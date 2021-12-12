#include<stdio.h>

/* "\t" is the tab or 4 spaces token in C */

int main()
{
	int a=-11;
	printf("a=%d\t",a);
	printf("a=%o\t",a);//-11 is converted to "unsigned octal" using its format specifier
	printf("a=%x\t",a);//-11 is converted to "unsigned hexa" using its format specifier
	printf("a=%X\n",a);//-11 is converted to same as above but in capital alphabets
       //All the unsigned values are printed as (highest value in its range  - 11).   	
return 0;	
}
