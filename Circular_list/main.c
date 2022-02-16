#include "main.h"

/* Circular List Test main function */
int main(int argc ,char const *argv[])
{
    CNode *list;
    int i=0;
    int arrData[] = {0,1,2,3,4,5};

    list = create_Cnode();
   
    for( i=0; i<sizeof(arrData)/sizeof(int) ; i++)
    {
	add_circular_Node(list, 0, arrData[i]);
	print_node(list);
    }
    printf("==================================\n");

    del_circular_Node(list, 4);
    print_node(list);


    return 0;
}
