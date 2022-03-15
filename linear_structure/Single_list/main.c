#include "main.h"


/* Single List Test main function */
int main(int argc ,char const *argv[])
{
    int cnt = 0;
    int length = 0;
    
    int i =0;

//============================================================================
    printf("[list add right side ]\n");

    SNode *list1 = malloc(sizeof(SNode));
    list1->next = NULL;

    printf("list size %d , struct size %d\n", sizeof(list1), sizeof(SNode));

    cnt = 10;
    for( i = 0; i<= cnt ; i++)
    {
	if(i%2 ==0 ) create_single_Node(list1, i);
    }
    print_list(list1);

    printf("list1 length : %d\n",get_node_Length(list1));
    del_single_Node(list1);  

//============================================================================

    printf("[list add left side] \n");
    
    SNode *list2 = malloc(sizeof(SNode));
    list2->next = NULL;
    
    cnt =10;
    for( i =0; i<=cnt ; i++)
    {
	if(i%2 == 0) add_single_Node(list2,i);
    }
    print_list(list2);
    printf("list2 length : %d\n", get_node_Length(list2));
    del_single_Node(list2);

//============================================================================
    printf("[specialize location adding list]\n");
    
    SNode *list3 = malloc(sizeof(SNode));
    list3->next =NULL;

    cnt =10/2;
    
    for( i =0; i<= cnt ; i++)
    {
	add_single_Node(list3,i);
    }

    printf("Before Insert\n");
    print_list(list3);
    printf("list length : %d\n", get_node_Length(list3));

    insert_node(list3, 0, 100);
    insert_node(list3, 0, 44);

    printf("First insert \n");
    print_list(list3);
    printf("list length : %d\n", get_node_Length(list3));

    insert_node(list3, get_node_Length(list3),1000);
    printf("2nd inset \n");
    print_list(list3);
    printf("list length : %d\n", get_node_Length(list3));
     
    del_single_Node(list3);
//============================================================================

    printf("[ array insert list and using bubble sort\n");
    
    int arrSize = 0;
    int array[] = { 44, 213 ,31, 52, 23, 74 ,99, 216, 72, 1223};
    SNode *list4 = malloc(sizeof(SNode));
    list4->next =NULL;

    printf("array size %d , int size %d\n",sizeof(array), sizeof(int));
    arrSize = sizeof(array)/sizeof(int);

    arrayTolist(list4, array, arrSize);
    print_list(list4);
    bubbleSortnode(list4, get_node_Length(list4));
    
    print_list(list4);
    searchlist(list4, 74);
    
    showlistMem(list4);
     
    return 0;
}
