#ifndef _RECTANGLE_H
#define _RECTANGLE_H

#include "Shape.h"

typedef struct{
    Shape super;
    int width;
    int height;
}Rectangle;

struct RectangleVTable{
    ShapeVtable super;
    int (*volume)(Rectangle const * const);
};

int Rectangle_ctor(Rectangle * const me, int x, int y, int width, int height);
int Rectangle_draw(Rectangle const * const me);
int Rectangle_area(Rectangle const * const me);

#define VOLUME_VCALL(me) ((struct RectangleVTable *)((me)->vptr))->volume((Rectangle *)(me))

#endif