#include<stdio.h>
int main()
{
	int a[3][3],r,c,flag=1;
	printf("Enter the 3×3 Matrix:");
	for(r=0;r<=2;r++)
	{
		for(c=0;c<=2;c++)
		{
			scanf("%d",&a[r][c]);
		}
	}
	printf("\nThe 3×3 Matrix is:\n");
	for(r=0;r<=2;r++)
	{
		for(c=0;c<=2;c++)
		{
			printf("\t%d",a[r][c]);
		}
		printf("\n");
	}
	return 0;
}