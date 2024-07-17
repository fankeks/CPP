#include "Shape.h"

static int Shape_draw(Shape const * const me);
static int Shape_area(Shape const * const me);


int Shape_ctor(Shape * const me, int x, int y)
{
    static const struct ShapeVtable vtable = {
        Shape_draw,
        Shape_area
    };
    me->vptr = &vtable;
    me->x = x;
    me->y = y;
    return 0;
}

int Shape_change_coord(Shape * const me, int x, int y)
{
    me->x = x;
    me->y = y;
    return 0;
}

static int Shape_draw(Shape const * const me){
    return 0;
}
static int Shape_area(Shape const * const me){
    return 0;
}