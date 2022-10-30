#include<stdio.h>
int main()
{
	int number=0;
	printf("\nEnter the Number:");
	scanf("%d",&number);
	switch(number)
	{
		case 10:
			printf("Number is Equals to 10");
		break;
		case 50:
			printf("Number is Equals to 50");
		break;
		case 100:
			printf("Number is Equals to 100");
		break;
		default:
		printf("Number is Not Equals to 10,50 or 100");
	}
	return 0;
}