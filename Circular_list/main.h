#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>


/*
 * DEFINES
 * */
#define null NULL

/*G-var*/

/*
 * 1. Circulr linked list struct
 * 0x00			   0x02			  0x03
 *  | data | Next Addr | -> | data | Next Addr |->|data |next addr|->ㄱ
 *              /\						     |
 *               ----------------------------------------------------- 
 **/
typedef struct _CNode
{
    int data; //4bytes.
    struct _CNode *next;  //circular list have tail , No Header node
}CNode;


/*
 *  function block
 */
/*1. Circular Linked list function | Circular_list.c */
CNode *create_Cnode();
void add_circular_Node(CNode *node, int data); // add right side
void Show_list(CNode *node);
void total_del_Node(CNode *node);

//void insert_circular_Node(CNode *node, int data);

