#include "math.h"

INT8 pow(INT8 x, INT8 y) {
    INT8 i;
    INT8 result = 1;

    for (i = 0; i < y; i++)
    {
        result *= x;
    }

    return result;
}
