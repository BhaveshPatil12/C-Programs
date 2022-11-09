#include<stdio.h>
int main()
{
	int *p;
	int var=10;
	p=&var;
	printf("Value of variable var is %d",var);
	printf("\nValue of variable var is %d",*p);
	printf("\nAddress of Variable var is %p",&var);
	printf("\nAdress of variable var is %p",p);
	printf("\nAdress of Pointer is %p",&p);
	return 0;
}