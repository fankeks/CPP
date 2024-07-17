#ifndef _SHAPE_H
#define _SHAPE_H

typedef struct{
    struct ShapeVtable const *vptr;
    int x;
    int y;
}Shape;

struct ShapeVtable{
    int (*draw)(Shape const * const me);
    int (*area)(Shape const * const me);
};

int Shape_ctor(Shape * const me, int x, int y);
int Shape_change_coord(Shape * const me, int x, int y);

#define AREA_VCALL(me) (me)->vptr->area((me))
#define DRAW_VCALL(me) (me)->vptr->draw((me))

#endif