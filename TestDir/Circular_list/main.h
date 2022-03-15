#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>


/*
 * DEFINES
 * */
#define null NULL

typedef struct _Node *hdr;
//structure

/*
 * 1. Single linked list struct
 * 0x00			   0x02
 *  | data | Next Addr | -> | data | Next Addr |    
 **/

typedef struct _Node
{
    struct _Node *next; 
    int data; //4bytes.
}Node;


/*
 *  function block
 */
/*1. Single Linked list function | single_list.c */

Node *Crtenode();
void Show_list(Node *node);
void add_node(Node *cur, int data);
void total_del_node(Node *node);
