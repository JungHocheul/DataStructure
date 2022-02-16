#include "main.h"

/* Circular List Test main function */
int main(int argc ,char const *argv[])
{
    int i=0;
    int arrData[] = {0,1,2,3,4,5};
    
    /*first node create*/
    CNode *list = create_Cnode();

   
    add_circular_Node(list, arrData[0]);
    add_circular_Node(list, arrData[1]);
    Show_list(list);
    free(list);

    printf("==================================\n");
#if 0
    del_circular_Node(list, 4);
    print_node(list);
#endif


    return 0;
}
