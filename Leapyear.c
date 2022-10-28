#include<stdio.h>
int main()
{
	int year;
	printf("\nEnter The Year:");
	scanf("%d",&year);
	if((year%4==0 || year%400==0) && (year%100!=0))
	{
		printf("\n This Year is Leap Year");
	}
	else
	{
		printf("\n This Year is not Leap Year");
	}
	return 0;
}