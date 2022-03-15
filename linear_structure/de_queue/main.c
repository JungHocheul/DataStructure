#include "main.h"

int main()
{
    Queue q;
    init_queue(&q);
    int i =0;
    for(i=0;i<MAX_QUEUE_SIZE;i++){
	add_front(&q,i);
	print_queue(&q);
    }
    for(i=0;i<MAX_QUEUE_SIZE;i++){
	delete_rear(&q);
	print_queue(&q);
    }

    return 0;

}
