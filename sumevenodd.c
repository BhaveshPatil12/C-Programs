#include<stdio.h>
int main()
{
	int i,sumeven=0,sumodd=0;
	for(i=1;i<=20;i++)
	{
		if(i%2==0)
		{
			printf("\n%d",i);
			sumeven=sumeven+i;
		}
		else
		{
			printf("\t%d",i);
			sumodd=sumodd+i;
		}
	}
	printf("\n%d\t%d",sumeven,sumodd);
}