#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1415926535897

char func[20];
char param[20];
int degree;

void parsing(char *string)
{
	strcpy(func,strtok(string, "("));
	strcpy(param, strtok(NULL, ")"));
	
}

void isLogical(char *ch)
{
	parsing(ch);
}

//double getRadian(int _num)
//{
//	double radian;
//	radian = _num * (PI / 180);
//	return radian;
//}
//
//double Sind(double _num)
//{
//	getRadian(_num);
//	double num = sind(_num);
//	return num;
//}
//
//double Cosd(double _num)
//{
//
//}
//
//double Log(double _num)
//{
//
//}
//double LogT(double _num)
//{
//
//}
//double Tand(double _num)
//{
//
//}
//double Sqrt(double _num)
//{
//
//}
//
//double Exp(double _num)
//{
//
//}
//double Sinh(double _num)
//{
//
//}
//double Tanh(double _num)
//{
//
//}
//double Cosh(double _num)
//{
//
//}

int main()
{
	char ch[256];
	gets(ch);
	isLogical(ch);
}


