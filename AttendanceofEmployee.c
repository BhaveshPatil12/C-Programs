#include<stdio.h>
void main()
{
	int attendance,type;
	printf("\nEnter the Attendance (0-Absent,1-Present):");
	scanf("%d",&attendance);
	if(attendance==0)
	{
		printf("\nEmployee is Absent");
		printf("\nWage=0");
	}
	else
	{
		printf("\nEnter the Employee type (0-Half,1-Full):");
		scanf("%d",&type);
		if(type==0)
		{
			printf("\nHalf Time");
			printf("\nWage=40");
		}
		else
		{
			printf("\nFull Time");
			printf("\nWage=80");
		}
	}
}