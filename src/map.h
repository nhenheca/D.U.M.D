#ifndef MAP_H
#define MAP_H

/* ############ MAP DEFINITIONS ############ */
#define MAP_X 64
#define MAP_Y 64
#define MAP_SIZE (MAP_X * MAP_Y)

/* ############ BIT MASKS ############ */
#define MASK_TILE 0x0F /* EQ 0000 1111 */
#define MASK_FOG  0x10 /* EQ 0001 0000 */

/* ############ TILE IDS ############ */
#define TILE_FLOOR     0 /* EQ 0000 0000 */
#define TILE_WALL      1 /* EQ 0000 0001 */
#define TILE_DOOR      2 /* EQ 0000 0010 */
#define TILE_STAIRS_UP 3 /* EQ 0000 0011 */
#define TILE_STAIRS_DN 4 /* EQ 0000 0100 */

/* ############ DATA DECLARATIONS ############ */
extern unsigned char dungeon_map[MAP_SIZE];

/* ############ FUNCTION DECLARATIONS ############ */
void generate_dungeon_level(char level);

/* MEMORY SIZE = 4096B  */
#endif