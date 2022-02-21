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
 * 1. double linked list struct
 * 0x00			   0x02
 *  | data | Next Addr | <-> | data | Next Addr |    
 **/

typedef struct _Node
{
    struct _Node *prev; 
    struct _NODE *next;
    int data; //4bytes.
}Node;


/*
 *  function block
 */
/*1. double Linked list function | double_list.c */

Node *Crtenode();
void Show_list(Node *node);
void add_Rside(Node *cur, int data);
void add_Lside(Node *cur, int data);
void total_del_node(Node *node);
