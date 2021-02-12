#include "jump.h"
#include "../constants/acceleration.h"

INT8 get_floor_y(INT16* current_floor, UINT8 next_y_position) {
    if(next_y_position >= *current_floor){

        return *current_floor;
    }

    return -1;
}

void jump(BYTE* jump_flag, UINT8* sprit_y_speed, INT16* current_floor, UINT8 sprite_code, UINT8 sprite_positions[2], INT8 gravity, UINT8 max_speed) {
    if (*jump_flag == 0) {
        *jump_flag = 1;
        *sprit_y_speed = max_speed;
    }

    sprite_positions[1] -= *sprit_y_speed;

    INT8 expected_floor_y = get_floor_y(current_floor, sprite_positions[1]);

    if (expected_floor_y != -1) {
        *jump_flag = 0;
        move_sprite(sprite_code, sprite_positions[0], expected_floor_y);
    } else {
        move_sprite(sprite_code, sprite_positions[0], sprite_positions[1]);
    }

    *sprit_y_speed -= gravity;
}

void air_jump(BYTE* jump_flag, UINT8* sprit_y_speed, INT16* current_floor, UINT8 sprite_code, UINT8 sprite_positions[2]) {
    jump(jump_flag, sprit_y_speed, current_floor, sprite_code, sprite_positions, AIR_GRAVITY, AIR_MAX_SPEED);
}

void water_jump(BYTE* jump_flag, UINT8* sprit_y_speed, INT16* current_floor, UINT8 sprite_code, UINT8 sprite_positions[2]) {
    jump(jump_flag, sprit_y_speed, current_floor, sprite_code, sprite_positions, WATER_GRAVITY, WATER_MAX_SPEED);
}
