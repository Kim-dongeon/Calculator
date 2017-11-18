#ifndef DEFAULTCAL_H
#define DEFAULTCAL_H

int mode_select();
void init_stack();
int isEmpty();
int isFull();
int push(int t);
int pop();
void print_stack();
int is_operator(char k);
int is_legal(char *s);
int precedence(int op);
void postfix(char *dst,char *src);
int calc(char *p);

#endif

