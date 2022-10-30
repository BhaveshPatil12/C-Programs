#include<stdio.h>
int main()
{
	char operation;
	double n1,n2;
	printf("Enter an operators(+,-,*,/):");
	scanf("%c",&operation);
	printf("Enter Two Operands:");
	scanf("%lf %lf",&n1,&n2);
	switch(operation)
	{
		case '+':
			printf("%.1lf + %.1lf = %1lf",n1,n2,n1+n2);
		break;
		case '-':
			printf("%.1lf - %.1lf = %1lf",n1,n2,n1-n2);
		break;
		case '*':
			printf("%.1lf * %.1lf = %1lf",n1,n2,n1*n2);
		break;
		case '/':
			printf("%.1lf / %.1lf = %1lf",n1,n2,n1/n2);
		break;
		default:
			printf("Error! operator is not correct");
	}
	return 0;
}