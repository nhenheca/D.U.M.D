#ifndef ENTITY_H
#define ENTITY_H

#define ENTITY_ARRAY_SIZE 256
#define ENTITY_TYPE_ARRAY_SIZE 100
#define ENTITY_ABILITIES_ARRAY_SIZE 50
#define ENTITY_NAME_SIZE 10 
#define ENTITY_ABILITY_NAME_SIZE 13 

/* ######### DATA DECLARATIONS ######### */
typedef struct {
    unsigned char x;        /* Entity x coordinate */    
    unsigned char y;        /* Entity y coordinate */
    unsigned char type;     /* Entity type lookup index */
    unsigned char hp;       /* Entity current hp */
    unsigned char size;     /* Entity party size */
    unsigned char ailments; /* Entity affected aliment */
    unsigned char speed;    /* Entity attack speed timer */
    unsigned char ability;  /* Entity ability cooldown */
} Entity;

typedef struct {
    unsigned char name[ENTITY_NAME_SIZE]; /* Entity Name */
    unsigned char portrait;               /* Entity Portrait lookup index */
    unsigned char attack;                 /* Entity Attack Value */
    unsigned int hp;                      /* Entity Starting HP */
    unsigned char speed;                  /* Entity Attack Speed */
    unsigned char ability;                /* Entity Attack lookup index */
} EntityType;

typedef struct {
    unsigned char name[ENTITY_ABILITY_NAME_SIZE]; /* Ability Name */
    unsigned char type;                           /* Ability Type - Heal, Dmg  */
    unsigned char value;                          /* Ability Value  */
    unsigned char cooldown;                       /* Ability Cooldown */
} EntityAbility;

extern Entity entity_array[ENTITY_ARRAY_SIZE];
extern const EntityType entity_type_array[ENTITY_TYPE_ARRAY_SIZE];
extern const EntityAbility entity_ability_array[ENTITY_ABILITIES_ARRAY_SIZE];

/* ######### MACROS ######### */

/* ######### FUNCTIONS #########*/

/* MEMORY SIZE = 3648B  */

#endif