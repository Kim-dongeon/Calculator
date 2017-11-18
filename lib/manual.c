#include <stdio.h>

void showEngineeringCalManual()
{

}
void showDefaultCalManual()
{

}
void showProgrammerCalManual()
{

}

void showConverterCalManual()
{

}
void manual()
{
	printf("--------------------------------------------\n");
	printf("There are 4 types of calculator\n");
	printf("Please enter the number of the menu you want\n");
	printf("--------------------------------------------\n");
	printf("1. Default calculator\n2.Engineering calculator\n3.Programmer calculator\n4.Date calculator\n5.Unit convertor\n");
	printf("--------------------------------------------\n");
	int menu;
	scanf("%d",&menu);
	if(menu==1)
	{
		printf("This menu is Standard calculator. Perform basic arithmetic operations as well as square root and square operations\n");

		showDefaultCalManual();
}
	else if(menu ==2)
	{
		printf("This menu is Engineering calculator. Perform factorials, modular calculations, and logarithmic operations that are deeper than regular calculators.\n");
		showEngineeringCalManual();
}
	else if(menu ==3)
	{
		printf("This menu is Programmer calculator. Perform logical operations such as OR,XOR,AND,NOT, for program implementation.\n");
		showProgrammerCalManual();
}
	else if(menu==4)
	{
		printf("This menu is Date calculator. Perform Date differences, D-day\n");
	}
	else if(menu==5)
	{
		printf("This menu is Unit convertor. Perform data conversion, and volume conversion.\n");
		showconverterCalManual();

}
}


int main(void)
{
	manual();
}
