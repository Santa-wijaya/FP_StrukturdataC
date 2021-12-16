#include <string.h>
#include <final_module.h>
#include <time.h>
#include "data_type.h"
#include <menu3.h>

//code below here //

void editdata(data_t **main_node){
    data_t *temp = *main_node;
    char nama_tugas[255], find[255];
    printf("Input Nama Tugas yang ingin Dicari : ");
    scanf("%[^\n]", &nama_tugas); fflush(stdin);

    while (temp!=NULL)
    {
        // code here
        if (strcmp(temp->nama_tugas,find)==0){
            printf("Masukan Tugas baru : ");
            scanf("%[^\n]", &find); fflush(stdin);
            getchar();
            strcpy(temp->nama_tugas, find);
            printf("Tugas baru berhasil di simpan");
        }
        temp=temp->next;
        
    }
    if(temp == NULL){
        printf("Data tidak ditemukan.\n");
    }

}



//code selesai
