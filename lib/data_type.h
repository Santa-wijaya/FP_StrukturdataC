#ifndef __DATA_TYPE_
    #define __DATA_TYPE_
    
    typedef struct data_t
    {
        char nama_tugas[50];
        int priority;
        int dl_dd, dl_mm, dl_yyyy;
        struct data_t *next;
    } *data;

    typedef struct date_t
    {
        int dd, mm, yyyy;
    }*date;
    
#endif