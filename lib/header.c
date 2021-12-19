#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "data_type.h"

void header_print(int *menu){
    system("cls");
    printf("========================");
    printf("\n== PROGRAM TO-DO LIST ==");
    printf("\n========================");
    printf("\nMenu : ");
    printf("\n1. Input Tugas\n2. Cari Tugas \n3. Edit Tugas\n4. Lihat Semua Tugas\n5. Mark As Completed\n6. Help\n7. Exit");

    printf("\nYour Choice Sir : "); scanf("%d", menu); fflush(stdin);
}

void get_current_date(date *temp){
    time_t current_time;
    time(&current_time);
    struct tm *now = localtime(&current_time);
    
    temp->dd = now->tm_mday;
    temp->mm = now->tm_mon+1;
    temp->yyyy = now->tm_year+1900;
}