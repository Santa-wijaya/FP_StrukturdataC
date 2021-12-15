#include <string.h>
#include <time.h>
#include "data_type.h"

//code below here //
void printNode(data_t **node){
    printf("\nDetail : ");
    printf("\nNama Tugas : %s", (*node)->nama_tugas);
    printf("\nDeadline   : %d/%d/%d", (*node)->dl_dd, (*node)->dl_mm, (*node)->dl_yyyy);
    printf("\nPriotity   : %d", (*node)->priority);
    printf("\n");
}

void searchByName(data_t **main_node, char searchKey[]){
    data_t *ptr = *main_node;
    int found = 0;
    
    while(ptr != NULL){
        if( strcmp(ptr->nama_tugas, searchKey) == 0){
            printNode(&ptr);
            found = 1;
        }
        ptr = ptr->next; 
    }
    if(!found)printf("\n== 404 NOT FOUND SIR! ==\n");
}

void searchByDeadline(data_t **main_node, int searchKey){

}

void searchByPriority(data_t **main_node, int searchKey){

}


void search(data_t **main_node){
    int searchBy, f_dl, f_priority;
    char f_nama[255];

    printf("\nTest main : %s", (*main_node)->nama_tugas);

    printf("\nCari Berdasarkan : \n1. Nama Tugas\n2. Deadline\n3. Priority");
    printf("\nYour Choice Sir : ");
    scanf("%d", &searchBy); fflush(stdin);

    switch (searchBy)
    {
    case 1:
        /* ByName */
        printf("\nInput nama tugas yang ingin dicari : ");
        scanf("%[^\n]", f_nama); fflush(stdin);

        searchByName(main_node, f_nama);

        break;
    
    case 2:
        /* byDeadLine */

        break;
    
    case 3:
        /* byPriority */

        break;
    
    default:
        if(searchBy < 1 || searchBy > 3){
            printf("\n== INVALID INPUT! ==\n");
            system("pause");
        }
        break;
    }
}

//code selesai