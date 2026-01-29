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
#define GET_RAND_VALUE() (rand_table[(unsigned char)(rand_table_index++ + (rand_table_shift += 5))] ^ rand_table_disturb++)

/* ######### FUNCTIONS #########*/
void set_seed(void);

/* MEMORY SIZE = 264B  */
#endif