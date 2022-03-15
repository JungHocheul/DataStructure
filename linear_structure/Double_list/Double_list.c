#include "main.h"

void print_double_list(DNode *node)
{
    printf("[ Show Double linked list]\n");
    if(node == NULL)
    {
	printf("Node no element found\n");
    }
    else
    {

       	DNode *cur = node->next;
	printf("[ ");
	while( cur->next != NULL)
        {
	    cur = cur->next;
	    if(cur->next == NULL)
	    {
		printf("<->|%d|<->",cur->data);
	    }else
	    {
		printf("<->|%d|<->",cur->data);
	    }

	}
    printf("]\n");
    }
}

/*initialize node*/
DNode *getNode(DNode *pnode)
{
    if(pnode == NULL)
    {
	pnode =malloc(sizeof(DNode));
	pnode->data = 0;
	pnode->prev = NULL;
	pnode->next = NULL;
	printf("node create.....\n");
	return pnode;
    }
    printf("Fail To node Create\n"); 
}

DNode *getlastNode(DNode *pnode)
{
    if(pnode == NULL)
    {
	return pnode;
    }else
    {
	DNode *cur = pnode;
	while(cur->next != NULL)
	{
	    cur = cur->next;
	}
	return cur;
    }
}

/*create node */
void create_double_Node(DNode *hdr, int data)
{
    if(hdr == NULL)
    {
	printf("header Node is NULL\n");
	return;
    }
    
    /* new node create & alloc node */
    DNode *new_node = malloc(sizeof(DNode));
    if(new_node == NULL)
    {
	printf("New Node Fail to Memory Allocated\n");
	return;
    }
    /* put data & init link address*/
    new_node->data = data;
    new_node->prev = NULL;
    new_node->next = NULL;

    if( hdr->next == NULL)
    {
	printf("This is the first node after head\n");
	/* connection first node*/
	new_node->prev = hdr;
        new_node->next = NULL;

	/*front add, hdr next node*/
	hdr->next = new_node;
	hdr->data = 0;
	hdr->prev = NULL;
	printf("-> data added(first)...(%d)\n",new_node->data);
    }else
    {
	new_node->prev = hdr;
	new_node->next = hdr->next;
	hdr->next->prev = new_node;
	hdr->next = new_node;
	printf("-> data added(first)...(%d)\n",new_node->data);
    }
}

void add_double_Node(DNode *pnode , int data)
{
    if(pnode == NULL)
    {
	printf("pNode is NULL\n");
	return;
    }

    // Create New Node 
    DNode *new_node = malloc(sizeof(DNode));
    if(new_node == NULL)
    {
        printf("New Node Fail to Memory Allocated\n");
        return;
    }
    new_node->prev = NULL;
    new_node->next = NULL;
    new_node->data = data;

    if(pnode->next == NULL)
    {
	printf("This is the first node after head\n");
	new_node->prev = pnode;
	new_node->next = NULL;

	pnode->next = new_node;
	pnode->data = 0;
	pnode->prev = NULL;
	printf("-> data added(last)....(%d)\n",new_node->data);
    }else
    {
	DNode *cur = pnode;
	while(cur->next != NULL)
	{
	    cur = cur->next;
	}
	cur->next = new_node;
	new_node->prev = cur;
	printf("-> data added (last)....(%d)\n", new_node->data);
    }
}

void del_double_Node(DNode *pnode)
{

    if(pnode == NULL)
    {
	printf("pNode is NULL\n");
	return;
    }

    DNode *cur = pnode;
    DNode *next;
    while( cur!= NULL)
    {
	next = cur->next;
	free(cur);
	cur = next;
    }
    printf("-> list deleted ....\n");
}

