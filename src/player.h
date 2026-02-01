#ifndef PLAYER_H
#define PLAYER_H

#define RAND_TABLE_SIZE 256

/* --------- DATA DECLARATIONS --------- */
typedef struct {
    unsigned char name[ENTITY_ABILITY_NAME_SIZE]; /* Ability Name */
    unsigned char type;                           /* Ability Type - Heal, Dmg  */
    unsigned char value;                          /* Ability Value  */
    unsigned char cooldown;                       /* Ability Cooldown */
} Player;

/* --------- MACROS --------- */

/* --------- FUNCTIONS ---------

/* MEMORY SIZE = 264B  */
#endif