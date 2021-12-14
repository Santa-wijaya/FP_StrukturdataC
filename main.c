#include "lib/final_module.h"

void main(){
    int status = 1, menu;
    data main_node = NULL;
    date current_date;

    get_current_date(&current_date);
    printf("\n< Current Date : %d/%d/%d >\n\n", current_date.dd, current_date.mm, current_date.yyyy);

    while(status){
        header_print(&menu);

        switch (menu)
        {
        case 1:
            printf("\n == Menu 1 : INPUT ==\n");
            /* code */
			input(main_node);
			
            system("pause");
            break;
        
        case 2:
            printf("\n == Menu 2 : Cari Tugas ==\n");
            system("pause");
            /* code */
            break;
        
        case 3:
            printf("\n == Menu 3 : EDIT ==\n");
            /* code */
            system("pause");
            break;
        
        case 4:
            printf("\n == Menu 4 : LIHAT SEMUA TUGAS ==\n");
            /* code */
            system("pause");
            break;
        
        case 5:
            printf("\n == Menu 5 : MARK AS COMPLLETE ==\n");
            /* code */
            system("pause");
            break;
            
        case 6:
            printf("\n == Menu 6 : HELP ==\n");
            /* code */
            system("pause");
            break;
        
        case 7:
            printf("\n== THANKYOU FOR USING OUR PROGRAM SIR! ==");
            printf("\n\nCredit : ");
            printf("\n1. I Wayan Trisna Wahyudi       (2008561018)");
            printf("\n2. Made Yosfin Saputra          (2008561023)");
            printf("\n3. I Ketut Santa Wijaya         (2008561028)");
            printf("\n4. Tristan Bey Kusuma           (2008561053)");
            printf("\n5. I Made Teja Sarmandana       (2008561098)\n\n");

            system("pause");
            status = 0;
            break;
        
        default:
            printf("\n====================");
            printf("\n== INVALID INPUT! ==");
            printf("\n====================\n");
            system("pause");
            break;
        }
    }
}