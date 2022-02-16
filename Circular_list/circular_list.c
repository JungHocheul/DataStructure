#include "main.h"

CNode *create_Cnode()
{
    CNode *circular = malloc(sizeof(CNode));
    if(circular == NULL)
    {
	printf("Fail to memory allocated\n");
    }else
    {
	circular->next = NULL;
	circular->data = 0;
    }
    
    return circular;
}

/*tail add */
void add_circular_Node(CNode *node, int data)
{
    int i;
    CNode *new_node = malloc(sizeof(CNode));
    if(node == NULL)
    {
	printf(" node no exist\n");
	return;
    }

    if(node->next == NULL)
    {
	/*
	 * cnt     0                         1
	 * node    node                  new_node
	 * addr   0x00                   (0x01)
	 * struct  | data | next(0x01) |->| data | next(0x00) |->
	 * */
	new_node->next = node;
	node->next = new_node;
	new_node->data = data;
    }else
    {
	/* cnt      0                        1                       2                     3
	 * node                            node                    node3
	 * add node									 new_node
	 * addr   0x00                   (0x01)                    (0x02)                (0x03)
	 * struct  | data | next(0x01) |->| data | next(0x02) |-> | data | next(0x00) |  |data| next(0x00)| 
	 * struct  | data | next(0x01) |->| data | next(0x02) |-> | data | next(0x03) |->|data| next(0x00)|->
	 * */
	 new_node->next = node->next;
	 node->next = new_node;
	 new_node->data = data;
    }
}

void insert_circular_Node(CNode *node, int data)
{
/* cnt      0                        1                       2                     3
 * node                            node                    node3
 * add node									 new_node
 * addr   0x00                   (0x01)                    (0x02)                (0x03)
 * struct  | data | next(0x01) |->| data | next(0x02) |-> | data | next(0x00) |  |data| next(0x00)| 
 * struct  | data | next(0x01) |->| data | next(0x02) |-> | data | next(0x03) |->|data| next(0x00)|->
 * */

    int i=0;

}
void Show_list(CNode *node)
{
    CNode *tmp_node = node->next;

    printf("[ ");
    
    while(node->next != tmp_node->next)
    {
	printf("|%d| -> ",tmp_node->data);
	tmp_node = tmp_node->next;
    }
    printf(" ]\n");  
}
#if 0
void del_circular_Node(CNode *node, int pos)
{
    int i;
    Node *pre_node = node->tail;
    Node *del_node = node->tail;
    
    if( node->cnt ==0)
    {
	printf("->  No exist node... \n");
    }
    else
    {
	for(  i =0; i<pos ; i++)
	{
	    pre_node = pre_node->next;
	}

	del_node = pre_node->next;
	pre_node->next = del_node->next;
	free(del_node);

	if(pos == node->cnt-1)
	{
	    node->tail = pre_node;
	}
	node->cnt--;
    }
}
#endif
