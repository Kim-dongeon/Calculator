#include <stdio.h>
#include <string.h>

int Hex()
{

}

int Dec()
{

}

int Oct()
{

}

int Bin()
{

}

void Parsing(char *_command)
{
	char *ptr = strtok(_command,"(");
	while(ptr !=NULL)
	{
		printf("%s\n",ptr);
		ptr = strtok(NULL,"(");
	}

}

void funcCall()
{

}

int main()
{
	char command[256];
	printf("Command : ");
	gets(command);
	Parsing(command);

}
