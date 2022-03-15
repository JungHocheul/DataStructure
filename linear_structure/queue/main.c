#include "main.h"

int main()
{
    Data obj={ 12345, "teset"};
    Queue q;
    init_queue(&q);

    enqueue(&q, obj);

    Data s=dequeue(&q);
    printf("num %d\n",s.data_num);
    printf("data_s %s\n", s.data_s);

    return 0;
}
