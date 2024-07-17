#ifndef _CIRCLE_H
#define _CIRCLE_H

#include "Shape.h"

typedef struct{
    Shape super;
    int R;
}Circle;

int Circle_ctor(Circle * const me, int x, int y, int R);
int Circle_draw(Circle const * const me);
int Circle_area(Circle const * const me);

#endif