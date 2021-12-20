#include <stdio.h>
#include <string.h>
#include "lib/final_module.h"

void main(){
    int status = 0, menu;
    int options;
    data_t *main_node = NULL;
    data_t *view;
    date current_date;

    get_current_date(&current_date);
    loginToContinue(&status);

    while(status){
        header_print(&menu);

        switch (menu)
        {
        case 1:
        	printf("\n====================================");
            printf("\n        MENU 1 : INPUT TUGAS");
            printf("\n====================================");
            /* code */
			input(&main_node, &current_date);

            system("pause");
            break;

        case 2:
            printf("\n====================================");
            printf("\n        MENU 2 : CARI TUGAS");
            printf("\n====================================");

            if (main_node == NULL){
                printf("\n==         Tugas Kosong!          ==\n");
            } else {
                search(&main_node);
            }

            printf("\n");
            system("pause");
            break;

        case 3:
            printf("\n====================================");
            printf("\n       MENU 3 : EDIT TUGAS");
            printf("\n====================================");
            /* code */
            if (main_node == NULL){
                printf("\n==         Tugas Kosong!          ==\n");
            } else {
                printf("\nMenu Edit\n");
                printf("1.  Nama\n");
                printf("2.  Deadline\n");
                printf("3.  Prioritas\n");
                printf("4.  Back to main menu\n");
                printf("Input : ");
                scanf("%d", &options);
                getchar();
                if(options == 1) {
                    editdata(&main_node);
                    break;
                }
                else if(options == 2){
                    editbyDeadline(&main_node);
                    break;
                }
                else if(options == 3){
                    editbyPrioritas(&main_node);
                    break;
                }
                else if( options == 4){
                    break;
                }
                else
                printf("input no 1 - 4 gan :D");
                getchar();
                continue;
            }
            system("pause");
            break;

        case 4:
            printf("\n====================================");
            printf("\n    MENU 4 : LIHAT SEMUA TUGAS");
            printf("\n====================================");

            // this is the code
            if (main_node == NULL){
                printf("\n==         Tugas Kosong!          ==\n");
            } else {
                menu_view(&main_node);
            }

            system("pause");
            break;

        case 5:
            printf("\n====================================");
            printf("\n    MENU 5 : MARK AS COMPLETE");
            printf("\n====================================\n");
	     /* code */
            if (main_node == NULL){
                printf("==         Tugas Kosong!          ==\n");
            } else {
                removeNode(&main_node);
            }
            printf("\n");
            system("pause");
            break;

        case 6:
            printf("\n====================================");
            printf("\n          MENU 6 : HELP\n");
            printf("\n====================================");
            guide();
            break;

        case 7:
        	printf("\n============================================");
            printf("\n                KELOMPOK 4");
            printf("\n============================================");
            printf("\n=== THANKYOU FOR USING OUR PROGRAM SIR! ====");
            printf("\n\nCredit : ");
            printf("\n1. I Wayan Trisna Wahyudi       (2008561018)");
            printf("\n2. Made Yosfin Saputra          (2008561023)");
            printf("\n3. I Ketut Santa Wijaya         (2008561028)");
            printf("\n4. Tristan Bey Kusuma           (2008561053)");
            printf("\n5. I Made Teja Sarmandana       (2008561098)");
            printf("\n============================================\n\n");

            system("pause");
            status = 0;
            break;

        default:
            if(menu < 1 || menu > 7)
            printf("\n====================================");
            printf("\n==         INVALID INPUT!         ==");
            printf("\n====================================");
            system("pause");
            break;
        }
    }
}
