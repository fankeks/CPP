#include "Circle.h"
#include <iostream>

int Circle_ctor(Circle * const me, int x, int y, int R){
    static const struct ShapeVtable vtable = {
        (int (*)(Shape const * const me)) (Circle_draw),
        (int (*)(Shape const * const me)) (Circle_area),
    };

    Shape_ctor(&(me->super), x, y);
    me->super.vptr = &vtable;

    me->R = R;
    return 0;
}

int Circle_draw(Circle const * const me){
    std::cout << "Circle" << std::endl;
    std::cout << "x: " << me->super.x << std::endl;
    std::cout << "y: " << me->super.y << std::endl;
    std::cout << "R: " << me->R << std::endl;
    return 0;
}

int Circle_area(Circle const * const me){
    return 2 * 3 * me->R;
}