#include <stdio.h>


float kmTocm(float data)
{
	double ret;
	ret = data * 100000;
	return ret;
}

float cmTokm(float data)
{
	double ret;
	ret = data / 100000;
	return ret;
}

float cmTom(float data)
{
	double ret;
	ret = data / 100;
	return ret;
}

float mTocm(float data)
{
	double ret;
	ret = data * 100;
	return ret;
}

float inchTocm(float data)
{
	double ret;
	ret = data * 2.54;
	return ret;
}

float cmToinch(float data)
{
	double ret;
	ret = data / 2.54;
	return ret;
}

float mToinch(float data)
{
	double ret;
	ret = data / 0.0254;
	return ret;
}
float inchTom(float data)
{
	double ret;
	ret = data * 0.0254;
	return ret;
}

float kmToinch(float data)
{
	double ret;
	ret = data / 0.0000254;
	return ret;
}

float inchToKm(float data)
{
	double ret;
	ret = data * 0.0000254;
	return ret;
}

int executionConverter()
{
	char command[256];
	char select = 0;
	float value = 0;
	printf("===============================================================\n");
	printf("Please select the unit conversion you want and give the number\n");
	printf("1. Km -> Cm	2. Cm -> Km	3. Cm -> M	4. M -> Cm	5. inch -> Cm\n6. Cm -> inch	7. M -> inch	8. inch -> M	9. Km -> inch	0. inch -> Km quit : q\n");
	while (1)
	{
		printf(":");
		scanf("%c", &select);
		
		if(select == 'q')
		{
			getchar();
			return 0;
		}
		printf("Please specify the value you want to convert\n");
		printf(":");
		scanf("%f", &value);
		if (select == '1')
		{
			printf("The converted value is %f\n", kmTocm(value));
		}
		else if (select == '2')
		{
			printf("The converted value is %f\n", cmTokm(value));
		}
		else if (select == '3')
		{
			printf("The converted value is %f\n", cmTom(value));
		}
		else if (select == '4')
		{
			printf("The converted value is %f\n", mTocm(value));
		}
		else if (select == '5')
		{
			printf("The converted value is %f\n", inchTocm(value));
		}
		else if (select == '6')
		{
			printf("The converted value is %f\n", cmToinch(value));
		}
		else if (select == '7')
		{
			printf("The converted value is %f\n", mToinch(value));
		}
		else if (select == '8')
		{
			printf("The converted value is %f\n", inchTom(value));
		}
		else if (select == '9')
		{
			printf("The converted value is %f\n", kmToinch(value));
		}
		else if (select == '0')
		{
			printf("The converted value is %f\n", inchToKm(value));
		}

		printf("\n");
		return 1;
	}
}

