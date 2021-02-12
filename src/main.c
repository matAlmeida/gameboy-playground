#include <stdio.h>
#include <gb/gb.h>

/* CONSTANTS */
#include "./constants/screen.h"
#include "./constants/acceleration.h"

/* LIBRARIES */
#include "./libs/jump.h"
#include "./libs/sprite.h"

/* UTILITY */
#include "./utils/math.h"
#include "./utils/delay.h"

/* ASSETS */
#include "./assets/Sprites.c"

BYTE is_jumping = 0;
UINT8 current_y_speed;
INT16 current_floor_y = 139;

void main() {
    set_sprite_data(0, 4, Sprites);

    struct Sprite* newPlayer = create_sprite(MIDDLE_X, current_floor_y, 1, 3, 0);

    DISPLAY_ON;
    SHOW_SPRITES;

    while (1)
    {
        if (joypad() & J_RIGHT) {
            newPlayer->x = newPlayer->x + AIR_GRAVITY;
            move_sprite_s(newPlayer, newPlayer->x, newPlayer->y);
        }
        if (joypad() & J_LEFT) {
            newPlayer->x = newPlayer->x - AIR_GRAVITY;
            move_sprite_s(newPlayer, newPlayer->x, newPlayer->y);
        }

        if((joypad() & J_B)) {
        }
        if((joypad() & J_A)) {
        }

        delay_r(4);
    }
}
