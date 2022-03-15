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
    return q->front ==(q->rear+1)%MAX_QUEUE_SIZE;
}

int is_empty(Queue *q)
{
    return q->rear == q->front;
}

void print_queue(Queue *q)
{
    printf("DEQUE(front=%d rear=%d)=",q->front,q->rear);
    
    if(!is_empty(q))
    {
	int i = q->front;
	do{
	    i= (i+1)%MAX_QUEUE_SIZE;
	    printf("%d |", q->data[i]);
	    if(i== q->rear)
		break;
	}
	while(i!=q->front);
    }
    printf("\n");
}

void add_front(Queue *q, element item){
    if(is_full(q)){
	error("OVERFLOW");
	return;
    }   
    q->data[q->front]=item;
    q->front=(q->front-1+MAX_QUEUE_SIZE)%MAX_QUEUE_SIZE; //front 값 감소
}   

void add_rear(Queue *q,element item){
    if(is_full(q)){
	error("OVERFLOW");
	return;
    }   
    q->rear=(q->rear+1)%MAX_QUEUE_SIZE;
    q->data[q->rear]=item;
}   

element delete_front(Queue *q){
    if(is_empty(q)){
	error("UNDERFLOW");
    }   
    q->front=(q->front+1)%MAX_QUEUE_SIZE;
    return q->data[q->front];
}   

element delete_rear(Queue *q){
    if(is_empty(q)){
	error("UNDERFLOW");
    }   
    element item=q->data[q->rear];
    q->rear=(q->rear-1+MAX_QUEUE_SIZE)%MAX_QUEUE_SIZE; //rear값 감소
    return item;
}   

element get_front(Queue *q){
    if(is_empty(q)){
	error("UNDERFLOW");
    }   
    return q->data[q->front+1]%MAX_QUEUE_SIZE;
}

element get_rear(Queue *q){
    if(is_empty(q)){
	error("UNDERFLOW");
    }
    return q->data[q->rear];
}


