#include<stdio.h>
int main()
{
	int rownm=1,nrow,colnm;
	rownm=1;
	colnm=1;
	printf("Input Number of Rows for the Table:");
	scanf("%d",&nrow);
	do
	{
		colnm=1;
		do
		{
			printf("%d\t",rownm*colnm);
			colnm++;
		}
		while(colnm<=nrow);
	rownm++;
	printf("\n");
	}
	while(rownm<=nrow);
}