#include "main.h"

/* Circular List Test main function */
int main(int argc ,char const *argv[])
{
    int i=0;
    int arrData[] = {0,1,2,3,4,5};
    
    /*first node create*/
    CNode *list = create_Cnode();

  
    for(i=0 ; i<sizeof(arrData)/sizeof(int) ; i++)
    {
        add_circular_Node(list, arrData[i]);
	Show_list(list);
    }
    printf(" data end adding....\n");
    printf("==================================\n");
    Show_list(list);
    total_del_Node(list);
#if 0
    del_circular_Node(list, 4);
    print_node(list);
#endif


    return 0;
}
