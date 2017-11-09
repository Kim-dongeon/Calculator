#include <stdio.h>

void manual()
{
	printf("---------------------------------------\n");
	printf("There are 4 types of calculator\n");
	printf("Please enter the number of the menu you want\n");
	printf("1. Default calculator\n2.Enginerring calculator\n3.Programmer calculator\n4.Date calculator\n5.Unit convertor\n");
	int menu;
	scanf("%d",&menu);
	if(menu==1)
	{
		printf("This menu is Standard calculator. Perform basic arithmetic operations as well as square root and square operations\n");

	}
}


int main(void)
{
	manual();
}
