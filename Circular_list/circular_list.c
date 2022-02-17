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
#if 0
void insert_circular_Node(CNode *node,int pos, int data)
{
/* cnt      0                        1                       2                     3
 * node                            node					         node3
 * add node						 new_node
 * addr   0x00                   (0x01)                    (0x02)                (0x03)
 * struct  | data | next(0x01) |->| data | next(0x02) |   | data | next(0x00) |  |data| next(0x00)| 
 * struct  | data | next(0x01) |->| data | next(0x02) |-> | data | next(0x03) |->|data| next(0x00)|->
 * */
    int i=0;
    CNode *new_node = malloc(sizeof(CNode));
    if(node == null)
    {
	printf(" node no exist\n");
	return;
    }

}
#endif
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

void del_node(CNode *node)
{
    if( node == NULL)
    {
	printf("-> No exist Circular node....\n");
	return;
    }
    CNode *cur = node;
    CNode *del_node = null;

    del_node= cur->next;
    cur->next = del_node->next;
    free(del_node);
    Show_list(cur);
}
