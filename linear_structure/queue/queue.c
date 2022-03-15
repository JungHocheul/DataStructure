#include "main.h"


void init_queue(Queue *q)
{
    q->front = q->rear = -1;
}

void error(char *data)
{
    printf("%s\n", data);
    exit(1);
}

int is_full(Queue *q)
{
    return q->rear == MAX_QUEUE_SIZE-1;
}

int is_empty(Queue *q)
{
    return q->rear == q->front;
}

void enqueue(Queue *q, Data obj)
{
    if(is_full(q))
    {
	error("OVERFLOW");
	return;
    }
    q->data[++q->rear] = obj;
}

Data dequeue(Queue *q)
{
    if(is_empty(q))
    {
	error("UNDERFLOW");
    }
    return q->data[++q->front];
}

Data peek(Queue *q)
{
    if(is_empty(q))
    {
	error("UNDERFLOW");
    }
    int index = q->front+1;
    return q->data[index];
}

