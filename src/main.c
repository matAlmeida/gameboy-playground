#include <stdio.h>
#include <gb/gb.h>
#include "./assets/Face.c"
#include "./utils/math.h"
#include "./constants/screen.h"

void main() {
    set_sprite_data(0, 1, Face);
    set_sprite_tile(0, 0);
    SHOW_SPRITES;

    UINT8 spriteX = MIDDLE_X;
    UINT8 spriteY = MIDDLE_Y;

    move_sprite(0, spriteX, spriteY);

}
