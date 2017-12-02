#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100
#define true 1
#define false 0

int stack[MAX_SIZE];

int top = -1;

void init_stack()
{
	top = -1;
}
int isEmpty()
{
	return (top < 0) ? 1 : 0;
}

int isFull()
{
	return (top == (MAX_SIZE-1)) ? 1 : 0;
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
int precedence(int op) {
	if (op == '(') return 0;
	if (op == '+' || op == '-') return 1;
	if (op == '*' || op == '/') return 2;
	else return 3;
}
void postfix(char *dst,char *src)
{
	char c;
	init_stack();

	while(*src)
	{
		if(*src == '('){
			push(*src);
			src++;
		}else if (*src == ')') {
			while (get_stack_top() != '(') {
				*dst++ = pop();
				*dst++ = ' ';
			}
			pop();
			src++;
		}
		else if (is_operator(*src)) {
			while (!isEmpty() &&
				precedence(get_stack_top()) >= precedence(*src)) {
				*dst++ = pop();
				*dst++ = ' ';
			}
			push(*src);
			src++;
		}
		else if (*src >= '0' && *src <= '9') {
			do {
				*dst++ = *src++;
			} while (*src >= '0' && *src <= '9');
			*dst++ = ' ';
		}
		else {
			src++;
		}
  	}
	while (!isEmpty()) {
		*dst++ = pop();
		*dst++ = ' ';
	}
	dst--;
	*dst = 0;
}

int calc(char *p) {
	int i;
	init_stack();
	while (*p) {
		if (*p >= '0' && *p <= '9') {
			i = 0;
			do {
				i = i * 10 + *p - '0';
				p++;
			} while (*p >= '0' && *p <= '9');
			push(i);
		}
		else if (*p == '+') {
			push(pop() + pop());
			p++;
		}
		else if (*p == '*') {
			push(pop() * pop());
			p++;
		}
		else if (*p == '-') {
			i = pop();
			push(pop() - i);
			p++;
		}
		else if (*p == '/') {
			i = pop();
			push(pop() / i);
			p++;
		}
		else {
			p++;
		}
	}
	return pop();
}

int execution_defaultCal()
{
	char exp[256];
	char pf[256];
	int r;


	printf("command : ");
	gets(exp);
	if(strcmp(exp,"q") ==0)
	{
		return 0;
	}
	postfix(pf,exp);
	printf("Post ifx : %s\n",pf);

	if(!is_legal(pf))
	{
		printf("Expression is legal!\n");
		return 1 ;
	}

	r = calc(pf);
	printf("Answer : %d\n",r);

	return 1;

}
