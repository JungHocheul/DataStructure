#include "main.h"

Node *Crtenode()
{
    Node *hdr = malloc(sizeof(Node));
    hdr->next = null;
    hdr->data = 0;
    printf("Create Node \n");
    return hdr;
}

void Show_list(Node *node)
{
    Node *cur = node->next;
    if( (node == null) && (cur == null) )
    {
	printf(" result : node is empty \n");
	return ;
    }
    printf("[ ");
    while(cur != NULL)
    {
	printf("|%d| -> ",cur->data);
	cur = cur->next;
    }
    printf("]\n");
}

void add_node(Node *cur, int data)
{
    /*add node crte*/
    Node *new_node = Crtenode(0);
    if(new_node == null)
    {
	printf("new_node Fail to Mem allocation\n");
	return;
    }
    
    if(cur == null)
    {
	printf("cur node or hdr No exist\n");
	cur = new_node;
	new_node->data = data;
	printf("New_node create\n");
	return ;
    }


    /* node link 
     ** 1. hdr node ->next == NULL 
     **  | hdr node |-> NULL  | new_node |-> NULL
     **  | hdr node | -> | new_node |-> NULL
     **/
    if( cur->next == null){
	cur->next = new_node;
	new_node-> next = null;
	new_node-> data = data;
    }else{
	Node *tmp = cur;
	while( tmp->next != null)
	{
	    tmp = tmp->next;
	}
	tmp->next = new_node;
	new_node->next = null;
	new_node->data = data;
    }

    printf("add data %d\n",new_node->data);
    return;
}

void total_del_node(Node *node)
{
    if(node == null)
    {
	printf("node is null\n");
	return;
    }

    Node *tmp = node;
    Node *next;
    while( tmp != null)
    {
	next = tmp->next;
	free(tmp);
	tmp = next;
    }	
    printf("node total distory \n");
    return;
}
