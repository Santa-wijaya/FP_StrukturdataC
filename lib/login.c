#include <string.h>
#include "login.h"

int getHashIndex(int tablesize, char name[]){
    int len, index;
    
    len = strlen(name);

    for(int i = 0; i<len; i++){
        index = (13*i+len) % 2021;
    }

    return index % tablesize;
}

int validateUser(login_t table[], login_t temp_input){
    int index = getHashIndex(7, temp_input.user_name);

    if((strcmp(table[index].user_name, temp_input.user_name) == 0) && (strcmp(table[index].user_name, temp_input.password) == 0)){
        return 1;
    } else {
        return 0;
    }
}

void register_user(login_t hash_table[], login_t temp_register){
    int index = getHashIndex(7, temp_register.user_name);

    strcpy(hash_table[index].user_name, temp_register.user_name);
    strcpy(hash_table[index].password, temp_register.password);

}

void saveToFile(login_t *temp_input){
    FILE *WriteUser = fopen("file\\userlist.txt", "a");
    fprintf(WriteUser, "%s|%s\n", temp_input->user_name, temp_input->password);
    fclose(WriteUser);
}

void initUser(login_t table[]){
    FILE *userList = fopen("file\\userlist.txt", "r");
    
    char temp[255];
    char *token; 
    int index;

    while(fgets(temp, 255, userList) != NULL){
        token = strtok(temp, "|");
        index = getHashIndex(7, token);
        strcpy(table[index].user_name, token);

        token = strtok(temp, "|");
        strcpy(table[index].password, token);
    }

    fclose(userList);

}

void loginToContinue(int *main_status){
    login_t table[7], temp_input;
    int login_menu, status = 1;

    for (int i = 0; i < 7; i++)
    {
        strcpy(table[i].user_name, "-1");
    }
    
    while(status){    
        system("cls");
        printf("\n====================================");
        printf("\n==  Wellcome To Our Pogram Sir!   ==");
        printf("\n====================================");
        printf("\n1. Login\n2. Register\n3. Quit");
        printf("\nYour Choice Sir : ");
        scanf("%d", &login_menu); fflush(stdin);

        switch (login_menu)
        {
        case 1:
            /* login */

            //read from file
            initUser(table);

            //validate
            printf("\nUsername : ");
            scanf("%[^\n]", temp_input.user_name); fflush(stdin);

            printf("Password : ");
            scanf("%[^\n]", temp_input.password); fflush(stdin);

            *main_status = validateUser(table, temp_input);
            
            if(*main_status){
                status = 0;
                printf("\n====================================");
            	printf("\n          LOGIN SUCCESS");
            	printf("\n====================================");
                printf("\npress any key to continue sir!\n");
                
                getchar();            } 
            else {
                printf("\n== Login Gagal! ==\n");
                system("pause");
            }
            break;
        
        case 2:
            /* register */
            printf("\n====================================");
            printf("\n==       Input Your Data Sir      ==");
            printf("\n====================================");
            printf("\nUsername : ");
            scanf("%[^\n]", temp_input.user_name); fflush(stdin);

            printf("Password : ");
            scanf("%[^\n]", temp_input.password); fflush(stdin);


            //write to hashtable and files
            register_user(table, temp_input);
            saveToFile(&temp_input);

            printf("\n====================================");
			printf("\n==   Data User Berhasil Disimpan  ==");
			printf("\n====================================\n");
            system("pause");
            break;
        
        case 3:
            /* Quit */
            status = 0;
            break;
        
        default:
            if(login_menu < 1 || login_menu > 3)
                printf("\n====================================");
            	printf("\n==         INVALID INPUT!         ==");
            	printf("\n====================================");
                system("pause");
            break;
        }
    }
}