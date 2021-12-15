#include <stdio.h>
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
    data bantu = create_node(input_node);
    if(main_node==NULL) main_node=bantu;
    
    while(ptr->next != NULL) ptr = ptr->next;
    
    ptr->next = bantu;
}

void input(data main_node){
	data baru = malloc(sizeof(struct data_t));
    baru->next = NULL;
    
	printf("Nama Tugas : ");
    scanf("%[^\n]", baru->nama_tugas); fflush(stdin);
    printf("Deadline : \n");
    printf("    Tanggal : "); scanf("%d",&baru->dl_dd);
    printf("    Bulan   : "); scanf("%d",&baru->dl_mm);
    printf("    Tahun   : "); scanf("%d",&baru->dl_yyyy);
    printf("Level Prioritas : \n");
    printf("    1. Penting & Mendesak\n");
    printf("    2. Tidak Penting & Mendesak\n");
    printf("    3. Penting & Tidak Mendesak\n");
    printf("    4. Tidak Penting & Tidak Mendesak\n");
			
    printf("Pilihan : ");
    scanf("%d", &baru->priority);
	insert(main_node,baru);
}