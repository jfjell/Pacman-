
/* maps.c */

#include <stdint.h>
#include "level.h"

/* These maps are automatically generated by a script found in
 * the pixmaps folder
 */
 
 
#define E LEVEL_SQUARE_EMPTY
#define W LEVEL_SQUARE_WALL
#define I LEVEL_SQUARE_INACCESSIBLE
#define G LEVEL_SQUARE_GHOST
#define P LEVEL_SQUARE_PORTAL
#define C LEVEL_SQUARE_CONSUMABLE_SPEED
#define F LEVEL_SQUARE_CONSUMABLE_FREEZE
#define S G
#define O E

 
int8_t const map_level_1[LEVEL_COLUMNS*LEVEL_ROWS] =
{
	W,I,I,I,I,I,I,I,I,I,I,I,I,I,I,W,I,W,I,I,I,I,I,W,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,W,I,I,I,I,I,W,I,W,I,I,I,I,I,I,I,I,I,I,I,I,I,I,W,I,
	W,I,I,I,I,I,I,I,I,I,I,I,I,I,I,W,I,W,I,I,I,I,I,W,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,W,I,I,I,I,I,W,I,W,I,I,I,I,I,I,I,I,I,I,I,I,I,I,W,I,
	W,I,I,C,E,E,E,E,E,E,E,E,E,I,I,W,I,W,I,I,E,I,I,W,I,I,S,G,G,G,G,S,G,G,G,G,S,I,I,W,I,I,E,I,I,W,I,W,I,I,E,E,E,E,E,E,E,E,E,F,I,I,W,I,
	W,I,I,E,I,I,I,I,I,I,I,I,E,I,I,W,I,W,I,I,E,I,I,W,I,I,I,I,I,I,I,G,I,I,I,I,I,I,I,W,I,I,E,I,I,W,I,W,I,I,E,I,I,I,I,I,I,I,I,E,I,I,W,I,
	W,I,I,E,I,I,I,I,I,I,I,I,E,I,I,W,I,W,I,I,E,I,I,W,I,I,I,I,I,I,I,G,I,I,I,I,I,I,I,W,I,I,E,I,I,W,I,W,I,I,E,I,I,I,I,I,I,I,I,E,I,I,W,I,
	W,I,I,E,I,I,W,W,W,W,I,I,E,I,I,W,W,W,I,I,E,I,I,W,W,W,W,W,W,I,I,G,I,I,W,W,W,W,W,W,I,I,E,I,I,W,W,W,I,I,E,I,I,W,W,W,W,I,I,E,I,I,W,I,
	W,I,I,E,I,I,W,I,I,I,I,I,E,I,I,I,I,I,I,I,E,I,I,I,I,I,I,I,I,I,I,G,I,I,I,I,I,I,I,I,I,I,E,I,I,I,I,I,I,I,E,I,I,I,I,I,W,I,I,E,I,I,W,I,
	W,I,I,E,I,I,W,I,I,I,I,I,E,I,I,I,I,I,I,I,E,I,I,I,I,I,I,I,I,I,I,G,I,I,I,I,I,I,I,I,I,I,E,I,I,I,I,I,I,I,E,I,I,I,I,I,W,I,I,E,I,I,W,I,
	W,I,I,E,I,I,W,I,I,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,I,I,W,I,I,E,I,I,W,I,
	W,I,I,E,I,I,W,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,I,I,I,I,I,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,W,I,I,E,I,I,W,I,
	W,I,I,E,I,I,W,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,I,I,I,I,I,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,W,I,I,E,I,I,W,I,
	W,I,I,E,I,I,W,I,I,E,I,I,W,W,W,W,W,W,W,W,W,W,W,W,I,I,E,I,I,W,W,W,W,W,I,I,E,I,I,W,W,W,W,W,W,W,W,W,W,W,W,I,I,E,I,I,W,I,I,E,I,I,W,I,
	W,I,I,E,I,I,W,I,I,E,I,I,W,I,I,I,I,I,I,I,I,I,I,W,I,I,E,I,I,W,I,I,I,W,I,I,E,I,I,W,I,I,I,I,I,I,I,I,I,I,W,I,I,E,I,I,W,I,I,E,I,I,W,I,
	W,I,I,E,I,I,W,I,I,E,I,I,W,W,W,W,W,W,W,W,W,W,W,W,I,I,E,I,I,W,W,W,W,W,I,I,E,I,I,W,W,W,W,W,W,W,W,W,W,W,W,I,I,E,I,I,W,I,I,E,I,I,W,I,
	I,I,I,E,I,I,I,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,I,I,I,I,I,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,I,I,I,E,I,I,I,I,
	I,I,I,E,I,I,I,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,I,I,I,I,I,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,I,I,I,E,I,I,I,I,
	P,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,P,I,
	I,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,I,I,
	I,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,I,I,
	W,I,I,E,I,I,W,W,W,W,W,W,W,W,W,W,W,W,W,I,I,E,I,I,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,I,I,E,I,I,W,W,W,W,W,W,W,W,W,W,W,W,W,I,I,E,I,I,W,I,
	W,I,I,E,I,I,W,I,I,I,I,I,I,I,I,I,I,I,W,I,I,E,I,I,I,I,I,I,I,I,I,W,I,I,I,I,I,I,I,I,I,E,I,I,W,I,I,I,I,I,I,I,I,I,I,I,W,I,I,E,I,I,W,I,
	W,I,I,E,I,I,W,I,I,I,I,I,I,I,I,I,I,I,W,I,I,E,I,I,I,I,I,I,I,I,I,W,I,I,I,I,I,I,I,I,I,E,I,I,W,I,I,I,I,I,I,I,I,I,I,I,W,I,I,E,I,I,W,I,
	W,I,I,E,I,I,W,I,I,E,E,E,E,E,E,E,I,I,W,I,I,E,E,E,E,E,E,E,E,I,I,W,I,I,E,E,E,E,E,E,E,E,I,I,W,I,I,E,E,E,E,E,E,E,I,I,W,I,I,E,I,I,W,I,
	W,I,I,E,I,I,W,I,I,E,I,I,I,I,I,E,I,I,W,I,I,I,I,I,I,I,I,I,E,I,I,W,I,I,E,I,I,I,I,I,I,I,I,I,W,I,I,E,I,I,I,I,I,E,I,I,W,I,I,E,I,I,W,I,
	W,I,I,E,I,I,W,I,I,E,I,I,I,I,I,E,I,I,W,I,I,I,I,I,I,I,I,I,E,I,I,W,I,I,E,I,I,I,I,I,I,I,I,I,W,I,I,E,I,I,I,I,I,E,I,I,W,I,I,E,I,I,W,I,
	W,I,I,E,I,I,W,I,I,E,I,I,W,I,I,E,I,I,W,W,W,W,W,W,W,W,I,I,E,I,I,W,I,I,E,I,I,W,W,W,W,W,W,W,W,I,I,E,I,I,W,I,I,E,I,I,W,I,I,E,I,I,W,I,
	W,I,I,E,I,I,W,I,I,E,I,I,W,I,I,E,I,I,W,W,W,W,W,W,W,W,I,I,E,I,I,W,I,I,E,I,I,W,W,W,W,W,W,W,W,I,I,E,I,I,W,I,I,E,I,I,W,I,I,E,I,I,W,I,
	W,I,I,E,I,I,I,I,I,E,I,I,W,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,I,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,W,I,I,E,I,I,I,I,I,E,I,I,W,I,
	W,I,I,E,I,I,I,I,I,E,I,I,W,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,I,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,W,I,I,E,I,I,I,I,I,E,I,I,W,I,
	W,I,I,F,E,E,E,E,E,E,I,I,W,I,I,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,O,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,I,I,W,I,I,E,E,E,E,E,E,C,I,I,W,I,
	W,I,I,I,I,I,I,I,I,I,I,I,W,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,W,I,I,I,I,I,I,I,I,I,I,I,W,I,
	W,I,I,I,I,I,I,I,I,I,I,I,W,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,W,I,I,I,I,I,I,I,I,I,I,I,W,I,
};
 
int8_t const map_level_2[LEVEL_COLUMNS*LEVEL_ROWS] =
{
	W,W,W,W,W,W,W,W,W,W,W,W,I,I,P,I,I,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,I,I,P,I,I,W,W,W,W,W,W,W,W,W,W,W,W,W,
	I,I,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,I,I,W,I,I,I,W,I,I,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,I,I,W,
	I,I,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,I,I,W,I,I,I,W,I,I,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,I,I,W,
	I,I,F,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,I,I,W,I,I,I,W,I,I,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,C,I,I,W,
	I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,W,I,I,I,W,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,W,
	I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,W,I,I,I,W,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,W,
	I,I,E,I,I,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,I,I,E,I,I,W,W,W,W,W,I,I,E,I,I,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,I,I,E,I,I,W,
	I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,I,I,W,I,I,I,I,I,I,I,I,E,I,I,I,I,I,I,I,I,I,E,I,I,I,I,I,I,I,I,W,I,I,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,W,
	I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,I,I,W,I,I,I,I,I,I,I,I,E,I,I,I,I,I,I,I,I,I,E,I,I,I,I,I,I,I,I,W,I,I,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,W,
	I,I,E,E,E,E,E,E,E,E,E,E,E,E,E,I,I,W,I,I,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,I,I,W,I,I,E,E,E,E,E,E,E,E,E,E,E,E,E,I,I,W,
	I,I,E,I,I,I,I,I,I,I,I,I,I,I,E,I,I,W,I,I,E,I,I,I,I,I,I,I,I,I,I,E,I,I,I,I,I,I,I,I,I,I,E,I,I,W,I,I,E,I,I,I,I,I,I,I,I,I,I,I,E,I,I,W,
	I,I,E,I,I,I,I,I,I,I,I,I,I,I,E,I,I,W,I,I,E,I,I,I,I,I,I,I,I,I,I,E,I,I,I,I,I,I,I,I,I,I,E,I,I,W,I,I,E,I,I,I,I,I,I,I,I,I,I,I,E,I,I,W,
	I,I,E,I,I,W,W,W,W,W,W,W,I,I,E,I,I,W,I,I,E,I,I,W,W,W,W,W,W,I,I,E,I,I,W,W,W,W,W,W,I,I,E,I,I,W,I,I,E,I,I,W,W,W,W,W,W,W,I,I,E,I,I,W,
	I,I,E,I,I,I,I,I,I,I,I,W,I,I,E,I,I,I,I,I,E,I,I,W,I,I,I,I,W,I,I,E,I,I,W,I,I,I,I,W,I,I,E,I,I,I,I,I,E,I,I,W,I,I,I,I,I,I,I,I,E,I,I,W,
	I,I,E,I,I,I,I,I,I,I,I,W,I,I,E,I,I,I,I,I,E,I,I,W,I,I,I,I,W,I,I,E,I,I,W,I,I,I,I,W,I,I,E,I,I,I,I,I,E,I,I,W,I,I,I,I,I,I,I,I,E,I,I,W,
	I,I,E,G,G,G,G,G,S,I,I,W,I,I,E,E,E,E,E,E,E,I,I,W,I,I,I,I,W,I,I,O,I,I,W,I,I,I,I,W,I,I,E,E,E,E,E,E,E,I,I,W,I,I,S,G,G,G,G,G,E,I,I,W,
	I,I,E,I,I,I,I,I,I,I,I,W,I,I,E,I,I,I,I,I,E,I,I,W,I,I,I,I,W,I,I,E,I,I,W,I,I,I,I,W,I,I,E,I,I,I,I,I,E,I,I,W,I,I,I,I,I,I,I,I,E,I,I,W,
	I,I,E,I,I,I,I,I,I,I,I,W,I,I,E,I,I,I,I,I,E,I,I,W,I,I,I,I,W,I,I,E,I,I,W,I,I,I,I,W,I,I,E,I,I,I,I,I,E,I,I,W,I,I,I,I,I,I,I,I,E,I,I,W,
	I,I,E,I,I,W,W,W,W,W,W,W,I,I,E,I,I,W,I,I,E,I,I,W,W,W,W,W,W,I,I,E,I,I,W,W,W,W,W,W,I,I,E,I,I,W,I,I,E,I,I,W,W,W,W,W,W,W,I,I,E,I,I,W,
	I,I,E,I,I,I,I,I,I,I,I,I,I,I,E,I,I,W,I,I,E,I,I,I,I,I,I,I,I,I,I,E,I,I,I,I,I,I,I,I,I,I,E,I,I,W,I,I,E,I,I,I,I,I,I,I,I,I,I,I,E,I,I,W,
	I,I,E,I,I,I,I,I,I,I,I,I,I,I,E,I,I,W,I,I,E,I,I,I,I,I,I,I,I,I,I,E,I,I,I,I,I,I,I,I,I,I,E,I,I,W,I,I,E,I,I,I,I,I,I,I,I,I,I,I,E,I,I,W,
	I,I,E,E,E,E,E,E,E,E,E,E,E,E,E,I,I,W,I,I,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,I,I,W,I,I,E,E,E,E,E,E,E,E,E,E,E,E,E,I,I,W,
	I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,I,I,W,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,W,I,I,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,W,
	I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,I,I,W,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,W,I,I,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,W,
	I,I,E,I,I,W,W,W,W,W,W,W,W,W,W,W,W,W,I,I,E,I,I,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,I,I,E,I,I,W,W,W,W,W,W,W,W,W,W,W,W,W,I,I,E,I,I,W,
	I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,I,I,I,I,I,I,I,W,I,W,I,I,I,I,I,I,I,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,W,
	I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,I,I,I,I,I,I,I,W,W,W,I,I,I,I,I,I,I,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,W,
	I,I,C,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,I,I,I,I,I,I,I,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,F,I,I,W,
	I,I,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,I,I,I,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,I,I,W,
	I,I,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,E,E,E,E,E,E,E,E,E,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,I,I,W,
	W,W,W,W,W,W,W,W,W,W,W,W,I,I,E,I,I,W,W,W,W,W,W,W,W,I,I,I,I,I,I,I,I,I,I,I,I,I,W,W,W,W,W,W,W,W,I,I,E,I,I,W,W,W,W,W,W,W,W,W,W,W,W,W,
	I,I,I,I,I,I,I,I,I,I,I,W,I,I,P,I,I,W,I,I,I,I,I,I,W,I,I,I,I,I,I,I,I,I,I,I,I,I,W,I,I,I,I,I,I,W,I,I,P,I,I,W,I,I,I,I,I,I,I,I,I,I,I,I,
};

int8_t const map_level_3[LEVEL_COLUMNS*LEVEL_ROWS] = 
{
	W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,
	I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,W,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,
	I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,W,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,
	P,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,I,I,W,I,I,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,E,P,
	I,I,I,G,I,I,I,I,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,I,I,W,I,I,I,I,I,I,I,I,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,G,I,I,I,I,
	I,I,I,G,I,I,I,I,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,I,I,W,I,I,I,I,I,I,I,I,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,G,I,I,I,I,
	W,I,I,G,I,I,W,W,I,I,E,I,I,W,W,W,W,W,W,W,W,W,W,W,I,I,E,I,I,W,W,W,W,W,W,W,W,W,W,W,I,I,E,I,I,W,W,W,W,W,W,W,W,W,W,W,W,I,I,G,I,I,W,W,
	I,I,I,G,I,I,I,W,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,W,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,W,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,W,I,I,I,G,I,I,I,W,
	I,I,I,G,I,I,I,W,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,W,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,W,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,W,I,I,I,G,I,I,I,W,
	I,I,I,S,I,I,I,W,I,I,E,E,E,E,E,E,E,E,E,E,E,I,I,W,I,I,E,E,E,E,E,E,E,E,E,E,E,I,I,W,I,I,E,E,E,E,E,E,E,E,E,E,E,I,I,W,I,I,I,S,I,I,I,W,
	I,I,I,G,I,I,I,W,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,W,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,W,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,W,I,I,I,G,I,I,I,W,
	I,I,I,G,I,I,I,W,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,W,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,W,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,W,I,I,I,G,I,I,I,W,
	I,I,I,G,I,I,I,W,W,W,W,W,W,W,W,W,W,W,I,I,E,I,I,W,W,W,W,W,W,W,W,W,W,W,I,I,E,I,I,W,W,W,W,W,W,W,W,W,W,W,I,I,E,I,I,W,I,I,I,G,I,I,I,W,
	I,I,I,G,I,I,I,W,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,W,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,W,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,W,I,I,I,G,I,I,I,W,
	I,I,I,G,I,I,I,W,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,W,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,W,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,W,I,I,I,G,I,I,I,W,
	I,I,I,G,I,I,I,W,I,I,E,E,E,E,E,C,E,E,E,E,E,I,I,W,I,I,E,E,E,E,E,O,E,E,E,E,E,I,I,W,I,I,E,E,E,E,E,F,E,E,E,E,E,I,I,W,I,I,I,G,I,I,I,W,
	I,I,I,G,I,I,I,W,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,W,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,W,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,W,I,I,I,G,I,I,I,W,
	I,I,I,G,I,I,I,W,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,W,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,W,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,W,I,I,I,G,I,I,I,W,
	I,I,I,G,I,I,I,W,I,I,E,I,I,W,W,W,W,W,W,W,W,W,W,W,I,I,E,I,I,W,W,W,W,W,W,W,W,W,W,W,I,I,E,I,I,W,W,W,W,W,W,W,W,W,W,W,I,I,I,G,I,I,I,W,
	I,I,I,G,I,I,I,W,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,W,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,W,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,W,I,I,I,G,I,I,I,W,
	I,I,I,G,I,I,I,W,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,W,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,W,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,W,I,I,I,G,I,I,I,W,
	I,I,I,S,I,I,I,W,I,I,E,E,E,E,E,E,E,E,E,E,E,I,I,W,I,I,E,E,E,E,E,E,E,E,E,E,E,I,I,W,I,I,E,E,E,E,E,E,E,E,E,E,E,I,I,W,I,I,I,S,I,I,I,W,
	I,I,I,G,I,I,I,W,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,W,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,W,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,W,I,I,I,G,I,I,I,W,
	I,I,I,G,I,I,I,W,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,W,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,W,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,W,I,I,I,G,I,I,I,W,
	W,I,I,G,I,I,W,W,W,W,W,W,W,W,W,W,W,W,I,I,E,I,I,W,W,W,W,W,W,W,W,W,W,W,I,I,E,I,I,W,W,W,W,W,W,W,W,W,W,W,I,I,E,I,I,W,W,I,I,G,I,I,W,W,
	I,I,I,G,I,I,I,I,I,I,I,I,I,I,I,W,I,I,I,I,E,I,I,I,I,I,I,I,I,I,I,W,I,I,I,I,E,I,I,I,I,I,I,I,I,I,I,W,I,I,I,I,E,I,I,I,I,I,I,G,I,I,I,I,
	I,I,I,G,I,I,I,I,I,I,I,I,I,I,I,W,I,I,I,I,E,I,I,I,I,I,I,I,I,I,I,W,I,I,I,I,E,I,I,I,I,I,I,I,I,I,I,W,I,I,I,I,E,I,I,I,I,I,I,G,I,I,I,I,
	P,E,E,E,E,E,E,E,E,E,E,E,E,I,I,I,I,I,E,E,E,E,E,E,E,E,E,E,E,E,I,W,I,I,E,E,E,E,E,E,E,E,E,E,E,I,I,I,I,I,E,E,E,E,E,E,E,E,E,E,E,E,E,P,
	I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,I,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,W,I,I,I,I,I,I,I,I,I,I,I,I,E,I,I,I,I,I,E,I,I,I,I,I,I,I,I,I,I,I,I,I,
	I,I,I,I,I,I,I,I,I,I,I,I,E,E,E,E,E,E,E,I,I,I,I,I,I,I,I,I,I,I,I,W,I,I,I,I,I,I,I,I,I,I,I,I,E,E,E,E,E,E,E,I,I,I,I,I,I,I,I,I,I,I,I,I,
	W,W,W,W,W,W,W,W,W,W,I,I,I,I,I,I,I,I,I,I,I,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,I,I,I,I,I,I,I,I,I,I,I,W,W,W,W,W,W,W,W,W,W,W,
	I,I,I,I,I,I,I,I,I,W,I,I,I,I,I,I,I,I,I,I,I,W,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,I,W,I,I,I,I,I,I,I,I,I,I,I,W,I,I,I,I,I,I,I,I,I,I,
};
