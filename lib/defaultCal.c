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
