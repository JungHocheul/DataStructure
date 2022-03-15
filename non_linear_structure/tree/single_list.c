#include "main.h"

void print_list(SNode *node)
{
    SNode *cur = node->next;
    printf("[ ");
    while( cur != NULL)
    {
	printf("|%d| ->",cur->data);   
	cur = cur->next;
    }
    printf("]\n");
}
/*initialize node*/
void create_single_Node(SNode *target, int newdata)
{
    if(target == NULL)
    {
	printf("target Node is NULL\n");
	return;
    }
    /* alloc node */
    SNode *new_node = malloc(sizeof(SNode));

    if(new_node == NULL)
    {
	printf("New Node Fail to Memory Allocated\n");
	return;
    }
   
    /* put data*/
    new_node->data = newdata;

    /*Make next of new node as head */
    new_node->next = target->next;

    /*move the header to pointe to the new node*/
    target->next = new_node;
}

/*tail add */
void add_single_Node(SNode *target , int data)
{
    if(target == NULL)
    {
	printf("target Node is NULL\n");
	return;
    }
    if(target->next == NULL)
    {
	SNode *new_node = malloc(sizeof(SNode));
	if(new_node == NULL)
	{
	    printf("New Node Fail to Memory Allocated\n");
	    return;
	}
	 new_node->data = data;
	 new_node->next = NULL;
    
	target->next = new_node;
    }else
    {
	SNode *cur = target;
	while(cur->next != NULL)
	{
	    cur = cur->next;
	}
	
	SNode *new_node = malloc(sizeof(SNode));
	new_node->data = data;
	new_node->next = NULL;
	
	cur->next = new_node;
    }
}

void del_single_Node(SNode *target)
{
    if(target == NULL)
    {
	printf("target Node is NULL\n");
	return;
    }
    
    SNode *cur = target;
    SNode *next;
    
    while( cur!= NULL)
    {
	next = cur->next;
	free(cur);
	cur = next;
    }
}

/*specialize position node*/
void insert_node(SNode *target, int pos,int data)
{
    SNode *cur = target;
    int cnt = -1;
    
    SNode *new_node = malloc(sizeof(SNode));
    new_node->data =data;
    new_node->next = NULL;

    if(pos == 0)
    {
	new_node->next = target->next;
	target->next = new_node;
    }
    else
    {
	while(cnt != pos)
	{
	    if(cnt == (pos-1))
	    {
		new_node->next = cur->next;
		cur->next = new_node;
	    }
	    cur = cur->next;
	    cnt++;
	}
    }
}

/*get total single list length*/
int get_node_Length(SNode *target)
{
    int cnt =-1;
    SNode * cur = target;

    while(cur != NULL)
    {
	cnt++;
	cur = cur->next;
    }
    return cnt;
}

/*swap node data*/
void swapNode(SNode *node1, SNode *node2)
{
    int tmp;
    tmp = node1->data;
    node1->data = node2->data;
    node2->data = tmp;
}

/*sorting algorithm */
void bubbleSortnode(SNode *target, int size)
{
    SNode *cur;
    int i=0 , j=0;

    cur = target;

    cur->data = 0;
    cur = cur->next;

    for(i = 0; i< size ; i++)
    {
	if(cur->next == NULL)
	    break;
	for(j =0 ; j< size-1; j++)
	{
	    if(cur->data > cur->next->data)
		swapNode(cur,cur->next);

	    cur = cur->next;
	}
	cur = target->next;
    }
}

void showlistMem(SNode *target)
{
    SNode *cur = target;

    int i;
    int size = get_node_Length(target);
    printf("\n");
    printf("=======================================\n");
    printf("=======show list memory & data ========\n");
    printf("=======================================\n");

    for( i =0 ; i <= size ; i++)
    {
	printf("cur         : %p | \n", cur);
	printf("cur->next   : %p | ", cur->next);
	printf("cur->data   : %d\n", cur->data);
	cur = cur->next;
    }
}

void arrayTolist(SNode *list, int array[], int size)
{
    int i = 0;
    for (i = 0; i < size ; i++)
    {
	add_single_Node(list, array[i]);
    }

}

bool searchlist(SNode *list, int num)
{
    SNode *cur = list;
    
    int cnt = 0;

    while( cur != NULL)
    {
	if(cur->data == num)
	{
	    printf("-> found at index : %d, cur->data : %d\n", cnt, cur->data);
	    return true;
	}
	cur = cur->next;
	cnt++;
    }

    printf("-> nothing found searching for [%d]\n",num);
    return false;
}

SNode *getlist()
{
    SNode *new_node = malloc(sizeof(SNode));
    new_node->data = 0;
    new_node->next = NULL;
    return new_node;
}

