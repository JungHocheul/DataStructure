#include "main.h"


int put(unsigned int val)
{
    if( real >= MAX-1){
       	printf(" Queue Overflow\n");
	return -1;
    }

    Queue[++rear] = val;
    return 0;
}

int get()
{
    if( front <= 0)
    {
	printf("Queue Underflow\n");
	return -1;
    }

    return Queue[front++];
} 
