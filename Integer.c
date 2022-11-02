#include<stdio.h>
int main()
{
	int number,total=0;
	printf("\n Please Enter any Integer Below 10 \n");
	scanf("%d",&number);
	do
	{
		total=total + number;
		printf("Number=%d\n",number);
		printf("Total Value is:%d\n",total);
		number++;
	}
	while(number<10);
	printf("Total Value From Outside is:%d \n",total);
	return 0;
}