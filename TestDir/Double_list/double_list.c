#include "main.h"

Node *Crtenode()
{
    Node *hdr = malloc(sizeof(Node));
    hdr->prev = null;
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
    while(cur != null)
    {
	printf("|%d| <-> ",cur->data);
	cur = cur->next;
    }
    printf("]\n");
}

void add_Rside(Node *cur, int data)
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

    if( cur->next == null){

	new_node->prev = cur;
	new_node->next = null;
	new_node-> data = data;

	cur->next = new_node;
	
    }else{
	Node *tmp = cur;
	while( tmp->next != null)
	{
	    tmp = tmp->next;
	}

	new_node->prev = tmp;
	new_node->next = null;
	new_node->data = data;

	tmp->next = new_node;
    }

    printf("Right side adding data... %d\n",new_node->data);
    return;
}

void add_Lside(Node *cur, int data)
{
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

    if ( cur->prev == null){
	new_node->prev = null;
	new_node->next = cur;
	new_node->data = data;

	cur->prev = new_node;
    }else{
	Node *tmp = cur;
	while(tmp->prev != null)
	{
	    tmp= tmp->prev;
	}
	new_node->prev = null;
	new_node->next = tmp;
	new_node->data =data;

    }
    tmp->prev = new_node;
    printf("Left side adding data... %d\n",new_node->data);
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
