#include <string.h>
#include <time.h>
#include "data_type.h"
#include "menu5.h"

//code below here //
void printNode(data_t **node){
    int day_left = dayLeft(*node);

    printf("\nNama Tugas : %s", (*node)->nama_tugas);
    printf("\nDeadline   : %d/%d/%d", (*node)->dl_dd, (*node)->dl_mm, (*node)->dl_yyyy);
    printf("\nPriotity   : %d", (*node)->priority);
    if (day_left >= 0) printf("\nSisa Waktu    : %d hari", day_left);
    else printf("\nSisa Waktu    : TERLAMBAT %d hari", abs(day_left));

    printf("\n");
}

void searchByName(data_t **main_node, char searchKey[]){
    data_t *ptr = *main_node;
    int found = 0;
    
    while(ptr != NULL){
        if( strcmp(ptr->nama_tugas, searchKey) == 0){
            if(!found) printf("\nDetails : ");
            printNode(&ptr);
            found = 1;
        }
        ptr = ptr->next; 
    }
    if(!found)printf("\n== 404 NOT FOUND SIR! ==\n");
    system("pause");
}

void searchByDeadline(data_t **main_node, int day, int month, int year){
    data_t *ptr = *main_node;
    int found = 0;
    while(ptr != NULL){
        if(ptr->dl_dd == day && ptr->dl_mm == month && ptr->dl_yyyy == year){
            if(!found) printf("\nDetails : ");
            printNode(&ptr);
            found = 1;
        }
        ptr = ptr->next;
    }
    if(!found)printf("\n== 404 NOT FOUND SIR! ==\n");
    system("pause");
}

void searchByPriority(data_t **main_node, int searchKey){
    data_t *ptr = *main_node;
    int found = 0;
    while(ptr != NULL){
        if(ptr->priority == searchKey ){
            if(!found) printf("\nDetails : ");
            printNode(&ptr);
            found = 1;
        }
        ptr = ptr->next;
    }
    if(!found)printf("\n== 404 NOT FOUND SIR! ==\n");
    system("pause");
}


void search(data_t **main_node){
    int searchBy, f_dd, f_mm, f_yyyy, f_priority, ulang = 1;
    char f_nama[255];
    
    while(ulang){
        system("cls");
        printf("\n == Menu 2 : Cari Tugas ==\n");
        printf("\nCari Berdasarkan : \n1. Nama Tugas\n2. Deadline\n3. Priority\n4. Kembali ke menu utama");
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
            printf("\nInput deadline (dd/mm/yyy) : ");
            scanf("%d/%d/%d", &f_dd, &f_mm, &f_yyyy); fflush(stdin);

            searchByDeadline(main_node, f_dd, f_mm, f_yyyy);

            break;
        
        case 3:
            /* byPriority */
            printf("\nInput Priority to Search : ");
            scanf("%d", &f_priority); fflush(stdin);

            searchByPriority(main_node, f_priority);

            break;
        
        case 4:
            /* exit */
            ulang = 0;

            break;
        
        default:
            if(searchBy < 1 || searchBy > 4){
                printf("\n== INVALID INPUT! ==\n");
                system("pause");
            }
            break;
        }
    }

}

//code selesai