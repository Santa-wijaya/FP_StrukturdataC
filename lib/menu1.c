#include <string.h>
#include <time.h>
#include "data_type.h"

data create_node(data input){
    data new = malloc(sizeof(data));
    new->next = NULL;

    strcpy(new->nama_tugas, input->nama_tugas);
    new->priority = input->priority;
    new->dl_dd = input->dl_dd;
    new->dl_mm = input->dl_mm;
    new->dl_yyyy = input->dl_yyyy;

    return new;
}

void insert(data main_node, data input_node){
    data ptr = main_node;
    data baru = create_node(input_node);
    
    while(ptr->next != NULL) ptr = ptr->next;
    
    ptr->next = baru;
}

