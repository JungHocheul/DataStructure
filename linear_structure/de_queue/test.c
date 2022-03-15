#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 5

typedef int element;

typedef struct{
    int front;
    int rear;
    element data[MAX_QUEUE_SIZE];
} deQueue;

void error(char *message){
    fprintf(stderr,"%s\n",message);
    exit(1);
}

void init_queue(deQueue *dq){
    dq->rear=dq->front=0;
}

int is_full(deQueue *dq){
    return dq->front==(dq->rear+1)%MAX_QUEUE_SIZE;
}

int is_empty(deQueue *dq){
    return dq->front==dq->rear;
}

void deque_print(deQueue *dq){
    printf("DEQUE(front=%d rear=%d)=",dq->front,dq->rear);
    if(!is_empty(dq)){
	int i=dq->front;
	do{
	    i=(i+1)%MAX_QUEUE_SIZE;
	    printf("  %d  |",dq->data[i]);
	    if(i==dq->rear)
		break;
	}while(i!=dq->front);
    }
    printf("\n");
}

void add_front(deQueue *dq,element item){
    if(is_full(dq)){
	error("OVERFLOW");
	return;
    }
    dq->data[dq->front]=item;
    dq->front=(dq->front-1+MAX_QUEUE_SIZE)%MAX_QUEUE_SIZE; //front 값 감소

}

void add_rear(deQueue *dq,element item){
    if(is_full(dq)){
	error("OVERFLOW");
	return;
    }
    dq->rear=(dq->rear+1)%MAX_QUEUE_SIZE;
    dq->data[dq->rear]=item;
}

element delete_front(deQueue *dq){
    if(is_empty(dq)){
	error("UNDERFLOW");
    }
    dq->front=(dq->front+1)%MAX_QUEUE_SIZE;
    return dq->data[dq->front];
}

element delete_rear(deQueue *dq){
    if(is_empty(dq)){
	error("UNDERFLOW");
    }
    element item=dq->data[dq->rear];
    dq->rear=(dq->rear-1+MAX_QUEUE_SIZE)%MAX_QUEUE_SIZE; //rear값 감소
    return item;
}

element get_front(deQueue *dq){
    if(is_empty(dq)){
	error("UNDERFLOW");
    }
    return dq->data[dq->front+1]%MAX_QUEUE_SIZE;
}

element get_rear(deQueue *dq){
    if(is_empty(dq)){
	error("UNDERFLOW");
    }
    return dq->data[dq->rear];
}

int main(void) {
    deQueue  queue;
    init_queue(&queue);
    for(int i=0;i<3;i++){
	add_front(&queue,i);
	deque_print(&queue);
    }
    for(int i=0;i<3;i++){
	delete_rear(&queue);
	deque_print(&queue);
    }

    return 0;

}
