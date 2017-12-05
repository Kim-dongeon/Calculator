#include <stdio.h>
#include <string.h>
#include <unistd.h>

char *func[4] = {"Hex","Dec","Oct","Bin"};

int Hex(int num)
{	
	int position = 0;
	char hexadecimal[20] = { 0, };

	while (1)
	{
		int mod = num % 16;    
		if (mod < 10) //
		{
			hexadecimal[position] = 48 + mod;
		}
		else    
		{			
			hexadecimal[position] = 65 + (mod - 10);
		}

		num = num / 16;   

		position++;   

		if (num == 0)    
			break;
	}
	for (int i = position - 1; i >= 0; i--)
	{
		printf("%c", hexadecimal[i]);
	}
}

int Oct(int num)
{	
	if (num < 1)
	{
		return 0;
	}
	else
	{
		Oct(num / 8);
		printf("%d", num % 8);
	}
}

int Bin(int num)
{
	if (num < 1)
	{
		return 0;
	}
	else
	{
		Bin(num / 2);
		printf("%d", num % 2);
	}
}
void Parsing(char *_command)
{
	char *ptr =NULL;
	for(int i=0; i<4;i++)
	{
		ptr= strstr(_command,func[i]);
		if(ptr !=NULL)
		{
			printf("%s",ptr);
			return;
		}
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
