#include "main.h"


/* Single List Test main function */
int main(int argc ,char const *argv[])
{
    /*create hdr node*/
    Node *hdr = Crtenode();
    Show_list(hdr);
    /*hdr node tail + add node */
    add_Rside(hdr, 1);
    add_Rside(hdr, 3);
    add_Rside(hdr, 4);
    add_Rside(hdr, 6);
    add_Rside(hdr, 8);
    add_Rside(hdr, 9);
    Show_list(hdr);
    total_del_node(hdr);
    Show_list(hdr);
    
    return 0;
}
