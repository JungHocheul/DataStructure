#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 100
#define MAX_STRING_SIZE MAX_QUEUE_SIZE

/*global variable part*/
typedef int element;

typedef struct{
    int front;
    int rear;
    element data[MAX_QUEUE_SIZE];
}Queue;

void error(char *data);
void init_queue(Queue *q);

int is_full(Queue *q);
int is_empty(Queue *q);
void print_queue(Queue *q);
void add_front(Queue *q, element item);
void add_rear(Queue *q,element item);
element delete_front(Queue *q);
element delete_rear(Queue *q);
element get_front(Queue *q);
element get_rear(Queue *q);
