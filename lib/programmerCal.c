#include <stdio.h>
#include <string.h>
#include <unistd.h>

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

void funcCall(int n)
{
	if(n ==0)
	{
		Hex();
	}
	else if (n==1)
	{
		Dec();
	}
	else if(n==2)
	{
		Oct();
	}
	else if(n==3)
	{
		Bin();
	}
}

int isLogical(char *_command)
{
	char *func[4] = {"Hex","Dec","Oct","Bin"};
	int arr_size = sizeof(func)/sizeof(func[0]);

	for(int i=0;i<arr_size;i++)
	{
		if(strcmp(func[i],_command) ==0)
		{
			printf("find\n");
			return 1;
		}
	}

	printf("It is not logical !!\n");
	return 0;
}
void executionprogrammerCal()
{
	char command[256];
	printf("Command : ");
	gets(command);
	Parsing(command);
	isLogical(command);

	if(strcmp(command,"HEX") ==0)
	{
		funcCall(0);
	}
	else if(strcmp(command,"DEC") ==0)
	{
		funcCall(1);
	}
	else if(strcmp(command,"Bin")==0)
	{
		funcCall(2);
	}
}
int main()
{
	char command[256];
	printf("Command : ");
	gets(command);
	Parsing(command);
	isLogical(command);
}
