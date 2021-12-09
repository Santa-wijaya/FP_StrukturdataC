#include <stdio.h>
#include <stdlib.h>

void header_print(int *menu){
    system("cls");
    printf("========================");
    printf("\n== PROGRAM TO-DO LIST ==");
    printf("\n========================");
    printf("\nMenu : ");
    printf("\n1. Input Tugas\n2. Tampilkan Semua Tugas\n3. Edit Tugas\n4. Mark As Complete\n5. Exit");

    printf("\nYour Choice Sir : "); scanf("%d", menu); fflush(stdin);
}