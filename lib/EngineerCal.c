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
	strcpy(func, strtok(string, "("));
	strcpy(param, strtok(NULL, ")"));

}

void isLogical(char *ch)
{
	parsing(ch);
	printf("%s --> %s\n", func, param);
}

double getRadian(double _num)
{
	double radian;
	radian = _num * (PI / 180);
	return radian;
}
//////////////////////////////////////////////////////////
double Sind(double _num)
{

	double rad = getRadian(_num);
	double num = sin(rad);
	return num;
}
double Cosd(double _num)
{
	double rad = getRadian(_num);
	double num = cos(rad);
	return num;
}

double Log(double _num)
{
	double rad = getRadian(_num);
	double num = log(rad);
	return num;
}

double Tand(double _num)
{
	double rad = getRadian(_num);
	double num = tan(rad);
	return num;

}

double Sinh(double _num)
{
	double rad = getRadian(_num);
	double num = asin(rad);
	return num;

}
double Tanh(double _num)
{
	double rad = getRadian(_num);
	double num = atan(rad);
	return num;
}
double Cosh(double _num)
{
	double rad = getRadian(_num);
	double num = acos(rad);
	return num;
}

int executionEngineerCal()
{
	char ch[256];
	char ch1[256];
	int degree1=0;
	printf("Select function what you want\n");

	printf("1. sin    2. cos    3. tan\n4. asin   5. acos   6. atan\n7. log 8. sqrt  9. exp (q).exit\n");

	gets(ch);
	if(strcmp(ch,"q")==0)
	{
		return 0;
	}
	if (strlen(ch) > 2)
	{
		isLogical(ch);
		degree = atoi(param);
	}

	if (strcmp(func, "sin") == 0||strcmp(ch,"1")==0)
	{
		if (strcmp(ch, "1") == 0)
		{
			printf("Please fill in the angle you want\n");
			gets(ch1);
			degree1 = atoi(ch1);
			printf("%f\n", Sind(degree1));

		}
		else {
			printf("%f\n", Sind(degree));
		}		
	}
	else if (strcmp(func, "cos") == 0 || strcmp(ch, "2") == 0)
	{
		
		if (strcmp(ch, "2") == 0)
		{
			printf("Please fill in the angle you want\n");
			gets(ch1);
			degree1 = atoi(ch1);
			printf("%f\n", Cosd(degree1));

		}
		else {
			printf("%f\n", Cosd(degree));
		}
	}
	else if (strcmp(func, "tan") == 0 || strcmp(ch, "3") == 0)
	{
		
		if (strcmp(ch, "3") == 0)
		{
			printf("Please fill in the angle you want\n");
			gets(ch1);
			degree1 = atoi(ch1);
			printf("%f\n", Tand(degree1));

		}
		else {
			printf("%f\n", Tand(degree));
		}
	}
	else if (strcmp(func, "asin") == 0 || strcmp(ch, "4") == 0)
	{
		if (strcmp(ch, "4") == 0)
		{
			printf("Please fill in the angle you want\n");
			gets(ch1);
			degree1 = atoi(ch1);
			printf("%f\n", Sinh(degree1));

		}
		else {
			printf("%f\n", Sinh(degree));
		}
	}
	else if (strcmp(func, "acos") == 0 || strcmp(ch, "5") == 0)
	{
		
		if (strcmp(ch, "5") == 0)
		{
			printf("Please fill in the angle you want\n");
			gets(ch1);
			degree1 = atoi(ch1);
			printf("%f\n", Cosh(degree1));

		}
		else {
			printf("%f\n", Cosh(degree));
		}
	}
	else if (strcmp(func, "atan") == 0 || strcmp(ch, "6") == 0)
	{
		
		if (strcmp(ch, "6") == 0)
		{
			printf("Please fill in the angle you want\n");
			gets(ch1);
			degree1 = atoi(ch1);
			printf("%f\n", Tanh(degree1));

		}
		else {
			printf("%f\n", Tanh(degree));
		}
	}
	else if (strcmp(func, "log") == 0 || strcmp(ch, "7") == 0)
	{
		if (strcmp(ch, "7") == 0)
		{
			printf("Please enter your desired number\n");
			gets(ch1);
			degree1 = atoi(ch1);
			printf("%f\n", Log(degree1));

		}
		else {
			printf("%f\n", log(degree));
		}
	}
	else if (strcmp(func, "sqrt") == 0 || strcmp(ch, "8") == 0)
	{
		if (strcmp(ch, "8") == 0)
		{
			printf("Please enter your desired number\n");
			gets(ch1);
			degree1 = atoi(ch1);
			printf("%f\n", sqrt(degree1));

		}
		else {
			printf("%f\n", sqrt(degree));
		}
	}
	else if (strcmp(func, "exp") == 0 || strcmp(ch, "9") == 0)
	{
		if (strcmp(ch, "9") == 0)
		{
			printf("Please enter your desired number\n");
			gets(ch1);
			degree1 = atoi(ch1);
			printf("%f\n", exp(degree1));

		}
		else {
			printf("%f\n", exp(degree));
		}
	}
	return 1;
}







