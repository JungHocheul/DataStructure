#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 100
#define MAX_STRING_SIZE MAX_QUEUE_SIZE

/*global variable part*/
typedef int column;

typedef struct{
    int front;
    int rear;
    column data[MAX_QUEUE_SIZE];
}Queue;

void error(char *data);
void init_queue(Queue *q);

int is_full(Queue *q);
int is_empty(Queue *q);
void enqueue(Queue *q, column obj);
int dequeue(Queue *q);
void print_queue(Queue *q);
