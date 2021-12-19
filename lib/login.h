#ifndef __LOGIN_
    #define __LOGIN_
    #include "data_type.h"
    #include "login.c"

    int getHashIndex(int tablesize, char name[]);
    int validateUser(login_t table[], login_t temp_input);
    void register_user(login_t hash_table[], login_t temp_register);
    void saveToFile(login_t *temp_input);
    void initUser(login_t table[]);
    void loginToContinue(int *status);
    
#endif