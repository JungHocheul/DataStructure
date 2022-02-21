#include "main.h"


/* Single List Test main function */
int main(int argc ,char const *argv[])
{
    /*create hdr node*/
    Node *hdr = Crtenode();
    Node *phdr = hdr;
    Show_list(hdr);
    /*hdr node tail + add node */
    add_node(hdr, 1);
    add_node(hdr, 1);
    add_node(hdr, 5);
    Show_list(hdr);
    total_del_node(hdr);
    Show_list(hdr);
    return 0;
}
