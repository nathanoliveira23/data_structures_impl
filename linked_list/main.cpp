#include <iostream>
#include <cstdlib>
#include "headers/linked_list.h"


int main() {
    node* l_list = new_linked_list();

    insert_end(l_list, 32);
    insert_end(l_list, 17);
    insert_end(l_list, 3);
    
    remove_begin(l_list);

    print(l_list);
}