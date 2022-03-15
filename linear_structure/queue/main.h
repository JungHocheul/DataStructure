#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 100
#define MAX_STRING_SIZE MAX_QUEUE_SIZE

/*global variable part*/
typedef struct{
    int data_num;
    char data_s[MAX_STRING_SIZE];
}Data;

typedef struct{
    int front;
    int rear;
    Data data[MAX_QUEUE_SIZE];
}Queue;


void init_queue(Queue *q);
void error(char *data);

int is_full(Queue *q);
int is_empty(Queue *q);
void enqueue(Queue *q, Data obj);
Data dequeue(Queue *q);
Data peek(Queue *q);
