#include <stdio.h>
#include <gb/gb.h>

/* CONSTANTS */
#include "./constants/screen.h"
#include "./constants/acceleration.h"

/* LIBRARIES */
#include "./libs/jump.h"

/* UTILITY */
#include "./utils/math.h"
#include "./utils/delay.h"

/* ASSETS */
#include "./assets/Face.c"

BYTE is_jumping = 0;
UINT8 current_y_speed;
INT16 current_floor_y = 139;

void main() {
    set_sprite_data(0, 1, Face);
    set_sprite_tile(0, 0);
    DISPLAY_ON;
    SHOW_SPRITES;

    UINT8 face_position[2];
    face_position[0] = MIDDLE_X;
    face_position[1] = current_floor_y;

    move_sprite(0, face_position[0], face_position[1]);

    while (1)
    {
        /* Option Keys -> Shift & Return keys on Keyboard */
        if((joypad() & J_SELECT)) {

        }
        if((joypad() & J_START)) {

        }

        /* DPAD Keys -> Arrow Keys on Keyboard */
        if ((joypad() & J_UP) || is_jumping == 1) {
            air_jump(&is_jumping, &current_y_speed, &current_floor_y, 0, face_position);
        }
        if (joypad() & J_DOWN) {

        }
        if (joypad() & J_RIGHT) {
            face_position[0] = face_position[0] + AIR_GRAVITY;
            move_sprite(0,face_position[0],face_position[1]);
        }
        if (joypad() & J_LEFT) {
            face_position[0] = face_position[0] - AIR_GRAVITY;
            move_sprite(0,face_position[0],face_position[1]);
        }

        /* Action Keys -> A & S keys on Keyboard */
        if((joypad() & J_B)) {

        }
        if((joypad() & J_A)) {

        }

        delay_r(4);
    }
}
