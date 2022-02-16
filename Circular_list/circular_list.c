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
void add_circular_Node(CNode *node, int pos, int data)
{
    int i;
    CNode *new_node = malloc(sizeof(Node));

    new_node->data = data;

    if(node->cnt == 0)
    {
	new_node->next = new_node;
	node->tail = new_node;
    }else
    {
	for( i =0; i< pos ; i++)
	{
	    pre_node = pre_node->next;
	}

	new_node->next = pre_node->next;
	pre_node->next = new_node;
	if(pos == node->cnt)
	{
	    node->tail = new_node;
	}
    }

    node->cnt++;
}

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
