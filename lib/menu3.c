#include <string.h>
#include <time.h>
#include "final_module.h"
#include "data_type.h"
#include "menu3.h"
#include "menu5.h"

//code below here //

void editdata(data_t **main_node){
    data_t *temp = *main_node;
    char nama_tugas[255], find[255];
    printf("Input Nama Tugas yang ingin Dicari : \n");
    scanf("%[^\n]", &nama_tugas); fflush(stdin);

    while (temp!=NULL)
    {
        // code here
        if (strcmp(temp->nama_tugas,find)==0){
            printf("Masukan Tugas baru : \n");
            scanf("%[^\n]", &find); fflush(stdin);
            getchar();
            strcpy(temp->nama_tugas, find);
            printf("Tugas baru berhasil di simpan \n");
        }
        temp=temp->next;
        
    }
    if(temp == NULL){
        printf("Data tidak ditemukan.\n");
    }

}

void editbyDeadline (data_t **main_node){
    data_t *temp = *main_node, input_node;
    date tanggal;
    getTheDate(&tanggal);
    char find[255];
    printf("Masukan Nama Tugas yang ingin dicari : \n");
    scanf("%[^\n]", &find); fflush(stdin);
    getchar();

    while(temp!=NULL){
        if(strcmp(temp->nama_tugas,find) == 0){

            while (1)
            {
                printf("Masukan Tanggal Deadline baru (DD/MM/YY) : \n");
                scanf("%d%d%d", &input_node.dl_dd, &input_node.dl_mm, &input_node.dl_yyyy); fflush(stdin);
                getchar();

                if (input_node.dl_dd < tanggal.dd && input_node.dl_mm < tanggal.mm && input_node.dl_yyyy < tanggal.yyyy) 
                {
                    printf("Tanggal tidak boleh sama sebelum hari ini.\n");
                    continue;
                }else {
                    temp->dl_dd = input_node.dl_dd;
                    temp->dl_mm = input_node.dl_mm;
                    temp->dl_yyyy = input_node.dl_yyyy;
                    printf("Data Berhasil Disimpan. \n");
                    break;
                }
                
            }
            return;

        }
        temp=temp->next;
    }



}


void editbyPrioritas(data_t **main_node){

    //code here
    data_t *temp = *main_node;
    int prioritas;
    char find[255];
    printf("Masukan Nama Tugas yang Ingin dicari : \n");
    scanf("%[^\n]", &find); fflush(stdin);

    while (temp!=NULL)
    {
        if(strcmp(temp->nama_tugas,find) == 0){
            printf("Masukan Nilai Prioritas Baru (1-4) : \n");
            scanf("%d", &prioritas); fflush(stdin);
            getchar();
            temp->priority = prioritas;
            printf("Data Baru tersimpan.\n");
        }
        temp=temp->next;
    }
    if (temp==NULL){
        printf("Data Yang dicari tidak ada.\n");
    }
    
}



//code selesai
