#include<stdio.h>
#include<string.h>
int main()
{
	char name[10];
	printf("\nEnter the name:");
	scanf("%s",&name);
	printf("\nName is %s",name);
	printf("\nReverse:%s",strrev(name));
	return 0;
}