#include <string.h>
#include <time.h>
#include "data_type.h"
#include "menu4.h"
#include "menu5.h"

//code below here //

void menu_view(data_t **main_node){
    int pilihan;

    while(pilihan != 3){
    int nomor = 1, day_left, spesifik;
    data_t *tempMain = *main_node;
    data_t *spesific_view = *main_node;

    system("cls");
    printf("\n====================================");
    printf("\n    MENU 4 : LIHAT SEMUA TUGAS");
	printf("\n====================================");
    printf("\n1. Tampilkan Semua Tugas\n2. Lihat Spesifik\n3. Back To Main Menu");
    printf("\nYour Choice Sir : ");
    scanf("%d", &pilihan); fflush(stdin);

        switch (pilihan)
        {
        case 1:
            printf("\nDaftar Tugas : \n");
            while(tempMain != NULL)
            {
                day_left = dayLeft(tempMain);
                printf("%d. Nama tugas    : %s\n", nomor, tempMain->nama_tugas);
                printf("   Prioritas     : %d\n", tempMain->priority);
                printf("   Deadline      : %02d/%02d/%d\n", tempMain->dl_dd, tempMain->dl_mm, tempMain->dl_yyyy);
                if (day_left >= 0) printf("   Sisa Waktu    : %d hari\n", day_left);
                else printf("   Sisa Waktu    : TERLAMBAT %d hari\n", abs(day_left));
                tempMain = tempMain->next;

                nomor++;
            }

            system("pause");
            break;
        
        case 2:
            printf("\nCurent Task : \n");
            while (tempMain != NULL)
            {
                printf("%d. %s\n", nomor, tempMain->nama_tugas);
                tempMain = tempMain->next;
                nomor++;
            }

            printf("\nInput Nomor Urut Tugas : ");
            scanf("%d", &spesifik); fflush(stdin);

            for(int i = 1; i<spesifik; ++i){
                spesific_view = spesific_view->next;
            }

            day_left = dayLeft(spesific_view);
            printf("\nDetails : \n");
            printf("   Nama tugas    : %s\n", spesific_view->nama_tugas);
            printf("   Prioritas     : %d\n", spesific_view->priority);
            printf("   Deadline      : %02d/%02d/%d\n", spesific_view->dl_dd, spesific_view->dl_mm, spesific_view->dl_yyyy);
            if (day_left >= 0) printf("   Sisa Waktu    : %d hari\n", day_left);
            else printf("   Sisa Waktu    : TERLAMBAT %d hari\n", abs(day_left));
            system("pause");
            break;
        
        default:
            if(pilihan < 1 || pilihan > 3){
                printf("\n====================================");
            	printf("\n==         INVALID INPUT!         ==");
            	printf("\n====================================");
                system("pause");
            }
            break;
        }
    
    }
}

//code selesai
