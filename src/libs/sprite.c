#include "sprite.h"
#include <stdio.h>

struct Sprite* create_sprite(UINT8 x, UINT8 y, UINT8 width, UINT8 height, UINT8 first_sprite_id) {
    struct Sprite sprite;

    sprite.x = x;
    sprite.y = y - (height * SPRITE_SIZE);
    sprite.sprite_width = width;
    sprite.sprite_height = height;

    UINT8 number_sprites = width * height;

    UINT8 i;
    for (i = 0; i < number_sprites; i++) {
        sprite.sprite_ids[i] = first_sprite_id + i;
        set_sprite_tile(first_sprite_id + i, first_sprite_id + i);
    }

    move_sprite_s(&sprite, sprite.x, sprite.y);

    return &sprite;
}

void move_sprite_s(struct Sprite* sprite, UINT8 x, UINT8 y) {
    UINT8 i, j;

    for (i = 0; i < sprite->sprite_height; i++) {
        for (j = 0; j < sprite->sprite_width; j++) {
            move_sprite(sprite->sprite_ids[i * sprite->sprite_width + j], x + (j * SPRITE_SIZE) , y + (i * SPRITE_SIZE));
        }
    }
}
