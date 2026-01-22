#ifndef MAP_H
#define MAP_H

/* ############ MAP DEFINITIONS ############ */
#define MAX_WIDTH  64
#define MAX_HEIGHT 64
#define MAP_SIZE   (MAX_WIDTH * MAX_HEIGHT) /* 64x64 <=> 4096B <=> 4KB */

/* ############ BIT MASKS ############ */
#define MASK_TILE 0x0F /* EQ 0000 1111 */
#define MASK_FOG  0x10 /* EQ 0001 0000 */

/* ############ TILE IDS ############ */
#define TILE_FLOOR     1
#define TILE_WALL      2
#define TILE_DOOR      3
#define TILE_STAIRS_UP 4
#define TILE_STAIRS_DN 5

/* ############ DATA DECLARATIONS ############ */
extern unsigned char dungeon_map[MAP_SIZE];

/* ############ FUNCTIONS ############ */
void generate_dungeon_level(int seed, char level);

#endif