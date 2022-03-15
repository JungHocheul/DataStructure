#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>


/*
 * DEFINES
 * */


//structure

/*
 * 1. Single linked list struct
 * 0x00			   0x02
 *  | data | Next Addr | -> | data | Next Addr |    
 **/

typedef struct _SNode
{
    struct _SNode *next; 
    int data; //4bytes.
}SNode;


/*
 *  function block
 */
/*1. Single Linked list function | single_list.c */
void print_list(SNode *node);
void create_single_Node(SNode *target, int newdata); //add left side 
void add_single_Node(SNode *target , int data); // add right side
void del_single_Node(SNode *target);
void insert_node(SNode *target, int pos,int data);
int get_node_Length(SNode *target);
void swapNode(SNode *node1, SNode *node2);
void bubbleSortnode(SNode *target, int size);
void showlistMem(SNode *target);
void arrayTolist(SNode *list, int array[], int size);
bool searchlist(SNode *list, int num);
SNode *getlist();
