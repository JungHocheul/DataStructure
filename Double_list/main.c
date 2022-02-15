#include "main.h"


/* Single List Test main function */
int main(int argc ,char const *argv[])
{
    int i =0;
    int cnt= 0;

    DNode *hdr = NULL;
    hdr = getNode(hdr);
    
    cnt = 100;
    for( i = 0; i<= cnt ; i++)
    {
	if(i%2 ==0 ) create_double_Node(hdr, i);
    }
    print_double_list(hdr);

    add_double_Node(hdr, 999);
    add_double_Node(hdr, 555);
    add_double_Node(hdr, 444);
    
    print_double_list(hdr); 
    
    printf("Last Node data : %d\n",getlastNode(hdr));

    print_double_list(hdr);
    del_double_Node(hdr);
    return 0;
}
