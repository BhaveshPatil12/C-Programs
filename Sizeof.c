#include<stdio.h>
union one{
	int x;
	int y;
}one1;
union two{
	int x;
	int y;
	long z;
}two2;
union three{
	int arr[100];
	char y;
	double d[5];
}three3;
int main()
{
	printf("sizeof(one)=%lu, sizeof(two)=%lu, sizeof(three)=%lu",sizeof(one1),sizeof(two2),sizeof(three3));
	return 0;
}