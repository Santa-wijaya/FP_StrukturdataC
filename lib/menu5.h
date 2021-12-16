#ifndef __MENU5_
    #define __MENU5_
    #include "data_type.h"
    #include "final_module.h"
    #include "menu5.c"
    void getTheDate(date *date_now);
    int isLeapYear(int year);
    int dateInMonth(int month, int year);
    int dayLeft(data_t *temp_main_node);
    void viewAll(data_t *main_node, int menu);
    void removeNode(data_t **main_node);
    
#endif