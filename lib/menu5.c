#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <ctype.h>
#include "final_module.h" 
#include "data_type.h"

void getTheDate(date *date_now) {
    time_t time_now;
    time(&time_now);
    struct tm *time_now_converted = localtime(&time_now);
    date_now->dd = time_now_converted->tm_mday;
    date_now->mm = time_now_converted->tm_mon + 1;
    date_now->yyyy = time_now_converted->tm_year + 1900;
}

int isLeapYear(int year) {
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        return 1;
    else
        return 0;
}

int dateInMonth(int month, int year) {
    int date_month[12] = {31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (month != 2) return date_month[month-1];
    else {
        if (isLeapYear(year) == 1) return 29;
        else return 28;
    }
}

int dayLeft(data_t *temp_main_node) {
    int day_left;
    int day_from_month = 0;
    date_t date_now;
    getTheDate(&date_now);

    for (int i = date_now.mm ; i < temp_main_node->dl_mm; i++) {
        day_from_month += dateInMonth(i, temp_main_node->dl_yyyy);
    }
    
    day_left = (temp_main_node->dl_dd - date_now.dd) + day_from_month + \
                365 * (temp_main_node->dl_yyyy - date_now.yyyy);
    return day_left;
}

void viewAll(data_t *main_node, int menu) {
    data_t *temp = main_node;
    int nomor = 1, day_left, priority = 0, print = 1;

    while (temp != NULL) {
        
        day_left = dayLeft(temp);
        printf("%d. Nama tugas    : %s\n", nomor, temp->nama_tugas);
        printf("   Prioritas     : %d\n", temp->priority);
        printf("   Deadline      : %02d/%02d/%d\n", temp->dl_dd, temp->dl_mm, temp->dl_yyyy);
        if (day_left >= 0) printf("   Sisa Waktu    : %d hari\n", day_left);
        else printf("   Sisa Waktu    : TERLAMBAT %d hari\n", abs(day_left));
        temp = temp->next;
        nomor++;
    }
}

void removeNode(data_t **main_node) {
    data_t *prev = NULL, *temp = *main_node;
    char will_delete[50];
    
    viewAll(temp, 0);

    printf("Masukan nama tugas yang ingin di mark selesai : ");
    scanf("%[^\n]", will_delete);
    getchar();

    while(temp != NULL && strcmp(temp->nama_tugas, will_delete)) {
        prev = temp;
        temp = temp->next;
    }
    
    if (temp == NULL) {
        puts("\n Nama tugas yang anda masukkan tidak ada");
        return;
    }
    

    if (prev == NULL) *main_node = (*main_node)->next;
    else prev->next = temp->next;
}
