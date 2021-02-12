#ifndef SPRITE_H_
#define SPRITE_H_
#include <gb/gb.h>

#define SPRITE_SIZE 8

struct Sprite {
    UBYTE sprite_ids[40];
    UINT8 x;
    UINT8 y;
    UINT8 sprite_width;
    UINT8 sprite_height;
};

struct Sprite* create_sprite(UINT8 x, UINT8 y, UINT8 width, UINT8 height, UINT8 first_sprite_id);

void move_sprite_s(struct Sprite* sprite, UINT8 x, UINT8 y);

#endif // SPRITE_H_
