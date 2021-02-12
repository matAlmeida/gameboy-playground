#ifndef JUMP_H_
#define JUMP_H_
#include <gb/gb.h>

void air_jump(BYTE* jump_flag, UINT8* sprit_y_speed, INT16* current_floor, UINT8 sprite_code, UINT8 sprite_positions[2]);

void water_jump(BYTE* jump_flag, UINT8* sprit_y_speed, INT16* current_floor, UINT8 sprite_code, UINT8 sprite_positions[2]);

#endif // JUMP_H_
