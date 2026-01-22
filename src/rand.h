#ifndef RAND_H
#define RAND_H

#define RAND_TABLE_SIZE 256

/* ######### DATA DECLARATIONS ######### */
extern unsigned char rand_table_index;
extern unsigned char rand_table[RAND_TABLE_SIZE];

/* ######### MACROS ######### */
#define GET_RAND_VALUE() (rand_table[rand_table_index++])

/* MEMORY SIZE = 257B  */
#endif