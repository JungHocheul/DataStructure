#include "main.h"

int main()
{
    Queue q;
    column num;
    init_queue(&q);
    printf("---enque--\n");
    while(!is_full(&q))
    {
	printf("insert num:\n");
	scanf("%d",&num);
	enqueue(&q, num);
	print_queue(&q);
    }
    printf("quq is full\n");
    printf("deque\n");
    while(!is_empty(&q))
    {
	num = dequeue(&q);
	printf("out num %d\n", num);
	print_queue(&q);
    }
    printf("queue is full\n");

    return 0;
}
