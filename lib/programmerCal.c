#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//#include <unistd.h>

char *func[4] = { "Hex","Dec","Oct","Bin" };

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
	int i = 0;
	char *ptr = NULL;
	char *sArr[10] = { NULL, };
	int temp = 0;

	ptr = strtok(_command, "()");

	while (ptr != NULL)
	{
		sArr[i] = ptr;
		i++;		
		ptr = strtok(NULL, "()");
	}

	for (int i = 0; i < 10; i++)
	{
		if (sArr[i] != NULL)
			printf("%s\n", sArr[i]);
	}
	if (sArr[1] == NULL)
	{
		printf("Error\n");
		return;
	}
	temp = atoi(sArr[1]);
		if (strcmp(sArr[0], "Hex") == 0)
		{			
			Hex(temp);
		}
		else if (strcmp(sArr[0], "Oct") == 0)
		{
			Oct(temp);
		}
		else if (strcmp(sArr[0], "Bin") == 0)
		{
			Bin(temp);
		}
		
}

int executionprogrammerCal()
{
	char command[256];
	printf("Command : ");
	gets(command);
	if(strcmp(command,"q")==0)
	{
		return 0;
	}
	Parsing(command);	
	printf("\n");
	return 1;
}

