#include "main.h"



void error(char *data)
{
    printf("%s\n", data);
    exit(1);
}

void init_queue(Queue *q)
{
    q->rear = q->front=0;
}

int is_full(Queue *q)
{
    return (q->rear+1)%MAX_QUEUE_SIZE == q->front;
}

int is_empty(Queue *q)
{
    return q->rear == q->front;
}

void enqueue(Queue *q, column obj)
{
    if(is_full(q))
    {
	error("OVERFLOW");
	return;
    }
    q->rear = (q->rear+1)%MAX_QUEUE_SIZE;
    q->data[q->rear] = obj;
}

int dequeue(Queue *q)
{
    if(is_empty(q))
    {
	error("UNDERFLOW");
    }
    q->front += 1;
    return q->data[(q->front)&MAX_QUEUE_SIZE];
}

void print_queue(Queue *q)
{
    if(!is_empty(q))
    {
	int i = q->front;
	do{
	    i= (i+1)%MAX_QUEUE_SIZE;
	    printf("%d |", q->data[i]);
	    if(i== q->rear)
		break;
	}
	while(i!=q->rear);
    }
    printf("\n");
}
