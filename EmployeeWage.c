#include<stdio.h>
struct wage{
	char name[50];
	int rs;
};
struct wage employee();
int main(){
	struct wage e;
	e=employee();
	printf("\nwage details of the employee\n");
	printf("Name:%s",e.name);
	printf("Wage:%d",e.rs);
	return 0;
}
struct wage employee(){
struct wage e1;
printf("Enter the name of employee:");
scanf("%s",&e1.name);
printf("\nEnter the Wage:");
scanf("%d",&e1.rs);
return e1;
}