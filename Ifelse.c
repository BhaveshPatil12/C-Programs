#include<stdio.h>
int main()
{
	int a=0,b=0;
	printf("\nEnter The Value Of A:");
	scanf("%d",&a);
	printf("Enter The Value Of B:");
	scanf("%d",&b);
	if(a>b)
	{
		printf("\n A is Big");
	}
	else
	{
		printf("\n B is Big");
	}
	return 0;
}