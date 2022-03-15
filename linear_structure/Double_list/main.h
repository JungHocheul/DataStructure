#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>


/*
 * DEFINES
 * */


//structure

/*
 * 1. Double linked list struct
 * 0x00			                0x01                               0x03
 * <->|Prev Addr | data | Next Addr |<-> |Prev Addr | data | Next Addr | -> |Prev Addr |data|Next Addr|<-> 
 **/

typedef struct _DNode //12bytes structure
{
    int data; //4bytes.
    struct _DNode *prev;
    struct _DNode *next; //8bytes
}DNode;


/*
 *  function block
 */
/*1. Double Linked list function | Double_list.c */
DNode *getNode(DNode *pnode);
DNode *getlastNode(DNode *pnode);

void print_double_list(DNode *node);
void create_double_Node(DNode *hdr, int data);
void add_double_Node(DNode *pnode , int data); // add right side
void del_double_Node(DNode *pnode);
