#include<stdio.h>
void main()
{
	int ono,quantity,bill=0;
	printf("*** MENU ***");
	printf("\n1.Icecream");
	printf("\n2.Cone");
	printf("\n3.Pestries");
	printf("\n4.Exit");
	printf("\nEnter the Order Number:");
	scanf("%d",&ono);
	printf("\nEnter the Quantity:");
	scanf("%d",&quantity);
	switch(ono)
	{
		case 1:
			printf("\nYour Order is Icecream With Price 25/-");
			bill=quantity*25;
		break;
		case 2:
			printf("\nYour Order is Cone With Price 30/-");
			bill=quantity*30;
		break;
		case 3:
			printf("\nYour Order is Pestries With Price 40/-");
			bill=quantity*40;
		break;
		case 4:
			printf("\nYour Order is Exit");
		break;
		case 5:
			printf("\nBye Bye...");
		break;
		default:
			printf("\nInvalid Number");
		break;
	}
	printf("\nBill=%d",bill);
}