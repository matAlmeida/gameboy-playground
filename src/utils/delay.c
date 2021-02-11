#include "delay.h"

void delay_r(UINT8 render_loops) {
    UINT8 i;

    for (i = 0; i < render_loops; i++) {
        wait_vbl_done();
    }
}
