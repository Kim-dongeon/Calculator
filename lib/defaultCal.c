#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100
#define true 1
#define false 0

int stack[MAX_SIZE];

int top = -1;

int isEmpty()
{
  return (top < 0) ? 1 : 0;
}

int isFull()
{
  return (top == (MAX_XIZE-1)) ? 1 : 0;
}

int push(int t)
{
  if(isFull() == 1)
  {
	printf("Stack is overflow\n");
	return -999;
  }
  else
  {
 	top++;
 	stack[top] = t;
 	return true;
  }
}

int pop()
{
  if(isEmpty() == 1)
  {
	printf("Stack is Empty\n");
	return -999;
  }
  else
  {
	int temp=0;
	temp = stack[top];
	top--;
	return temp;
  }
}

void print_stack()
{
	printf("Stack : Top --> Bottom \n");
	for(int i=top; i>=0 ; i--)
	{
		printf("%d",stack[i]);
	}
}

int get_stack_top()
{
  if(isEmpty() ==  1)
  {
	return -1;
  }
  return stack[top];
}

int is_operator(char k)
{
	return (k == '+' || k== '-' || k == '/' || k=='*');
}

int is_legal(char *s)
{
  int f= 0;
  while(*s)
  {
	while(*s == ' '){
		s++;
        }
	if(is_operator(*s)){
		f--;
	}
	else{
		f++;
		while(*s != ' '){
			s++;
		}
	}
	if(f <1)break;
	s++;
  }
  return (f==1);

}
