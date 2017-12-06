#include <stdio.h>

void showEngineeringCalManual()
{

}
void showDefaultCalManual()
{
	printf("Example : 4*(3+2)/(3-2)\n");
	printf("Return Value is 20\n");
}
void showProgrammerCalManual()
{
	printf("Example : Hex(90)\n");
	printf("Return Value is 5A\n");
}

void showConverterCalManual()
{

}
void manual()
{
	char menu;
	char temp;
	printf("--------------------------------------------\n");
	printf("There are 4 types of calculator\n");
	printf("Please enter the number of the menu you want\n");
	printf("--------------------------------------------\n");
	printf("1.Default calculator\n2.Engineering calculator\n3.Programmer calculator\n4.Unit convertor\n q.Exit");
	printf("--------------------------------------------\n");
	printf(":");
	scanf("%c",&menu);
	temp = getchar();
	if(menu=='1')
	{
		printf("This menu is Standard calculator. Perform basic arithmetic operationss\n");

		showDefaultCalManual();
	}
	else if(menu =='2')
	{
		printf("This menu is Engineering calculator. Perform factorials, modular calculations, and logarithmic operations that are deeper than regular calculators.\n");
		showEngineeringCalManual();
}
	else if(menu =='3')
	{
		printf("This menu is Programmer calculator. Perform logical operations such as,Oct,Bin,Hex, for program implementation.\n");
		showProgrammerCalManual();
}
	else if(menu=='4')
	{
		printf("This menu is Unit convertor. Perform data conversion, and volume conversion.\n");
		showConverterCalManual();

	}else if(menu =='q')
	{
		printf("Manual Exit\n");
	}
}


