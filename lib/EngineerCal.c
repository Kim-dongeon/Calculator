#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1415926535897

int isLogical(char *ch)
{

}

int parsing(char *string)
{
	isLogical();
}
double getRadian(int _num)
{
	double radian;
	radian = _num * (PI / 180);
	return radian
}

double Sind(double _num)
{
	getRadian(_num);
	double num = sind(_num);
	return num;
}

double Cosd(double _num)
{
	getRadian(_num);
	double num = cosd(_num);
	return num;
}

double Log(double _num)
{
	getRadian(_num);
	double num = log(_num);
	return num;
}
double LogT(double _num)
{
	getRadian(_num);
	double num = logB(_num);
	return num;
}
double Tand(double _num)
{
	getRadian(_num);
	double num = tand(_num);
	return num;
}
double Sqrt(double _num)
{

	getRadian(_num);
	double num = sqrt(_num);
	return num;
}

double Exp(double _num)
{

	getRadian(_num);
	double num = exp(_num);
	return num;
}
double Sinh(double _num)
{

	getRadian(_num);
	double num = sinh(_num);
	return num;
}
double Tanh(double _num)
{

	getRadian(_num);
	double num = tanh(_num);
	return num;
}
double Cosh(double _num)
{

	getRadian(_num);
	double num = cosh(_num);
	return num;
}

void funcCall(int n, double _num)
{
	if(n ==0)
	{
		Sind(_num);
	}
	else if(n==1)
	{
		Cosd(_num);
	}
	else if(n==2)
	{
		Tand(_num);
	}
	else if(n==3)
	{
		Log(_num);
	}
	else if(n==4)
	{
		LogT(_num);
	}
	else if(n==5)
	{
		Sqrt(_num);
	}
	else if(n==6)
	{
		Exp(_num);
	}
	else if(n==7)
	{
		Sinh(_num);
	}
	else if(n==8)
	{
		Cosh(_num);
	}
	else if(n==9)
	{
		Tanh(_num);
	}
}
void compareCommand(char *cmd)
{

	parsing(cmd);
	if(strcmp(cmd,"Sind") ==0)
	{

	}
	else if(strstrcmp(cmd,"Cosd") ==0)
	{

	}
	else if(strcmp(cmd,"Tand") ==0)
	{

	}
	funcCall();
}
void executionEngineerCal()
{
	char ch[256];
	gets(ch);
	isLogical(ch);
	compareCommand(ch);

}
int main()
{
	char ch[256];
	gets(ch);
	isLogical(ch);



	return 0;
}

