#ifndef __DATA_TYPE_
    #define __DATA_TYPE_
    #include <stdlib.h>
    #include <stdio.h>
    #include <stdlib.h>

    typedef struct data_t
    {
        char nama_tugas[50];
        int priority;
        int dl_dd, dl_mm, dl_yyyy;
        struct data_t *next;
    } data_t;

    typedef struct date_t
    {
        int dd, mm, yyyy;
    }date;

    typedef struct login_t{
        char user_name[50], password[30];
    } login_t;
    
#endif