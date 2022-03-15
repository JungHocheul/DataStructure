#include <stdio.h>
#include <stdbool.h>

#define MAX_STACK_SIZE 100

extern int stack[MAX_STACK_SIZE];
int top = -1;

int IsEmpty();
int IsFull();
void push(int value);
int pop();

