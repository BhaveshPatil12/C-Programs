#include<stdio.h>
int main()
{
	int i,no,sum=0;
	printf("Enter Any Number:");
	scanf("%d",&no);
	for(i=1;i<no;i++)
	{
		if(no%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==no)
	{
		printf("\nThe Number is Perfect Number");
	}
	else
	{
		printf("\nThe Number is Not Perfect Number");
	}
}