#include <stdio.h>

#define MAX 100

/*global variable part*/
extern int Queue[MAX];

extern int front = -1, rear = -1;

int put(unsigned int val);
int get();
