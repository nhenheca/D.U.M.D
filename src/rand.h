#ifndef RAND_H
#define RAND_H

#define RAND_TABLE_SIZE 256

/* ######### DATA DECLARATIONS ######### */
extern unsigned int  rand_seed;
extern unsigned char rand_table_index;
extern unsigned char rand_table_shift;
extern unsigned char rand_table_disturb;
extern const unsigned char rand_table[RAND_TABLE_SIZE];

/* ######### MACROS ######### */
#define GET_RAND_VALUE() (rand_table[rand_table_index++] ^ rand_table[rand_table_shift += 3])

/* ######### FUNCTIONS #########*/
void set_seed();

/* MEMORY SIZE = 259B  */
#endif