#include<stdio.h>
int main()
{
	int i,n,facto=1;
	printf("Enter Any Number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		facto=facto*i;
		printf("\n%d",facto);
	}
	printf("\nFactorial=%d",facto);
}