#include<stdio.h>
int main()
{
	int i=1,number=0;
	printf("Enter the Number:");
	scanf("%d",&number);
	while(i<=10)
	{
		printf("\n %d",(number*i));
		i++;
	}
	return 0;
}