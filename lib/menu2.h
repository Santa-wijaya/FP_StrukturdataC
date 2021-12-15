#ifndef __MENU2_
    #define __MENU12_
    #include "data_type.h"
    #include "menu2.c"
    void search(data_t **main_node);
    void printNode(data_t **node);
    void searchByDeadline(data_t **main_node, int searchKey);
    void searchByPriority(data_t **main_node, int searchKey);
    void searchByName(data_t **main_node, char searchKey[]);
    
#endif