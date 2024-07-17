#include "Rectangle.h"
#include <iostream>


int Rectangle_ctor(Rectangle * const me, int x, int y, int width, int height){
    static const struct ShapeVtable vtable = {
        (int (*)(Shape const * const me)) (Rectangle_draw),
        (int (*)(Shape const * const me)) (Rectangle_area),
    };

    Shape_ctor(&(me->super), x, y);
    me->super.vptr = &vtable;

    me->height = height;
    me->width = width;
    return 0;
}

int Rectangle_draw(Rectangle const * const me){
    std::cout << "Rectangle" << std::endl;
    std::cout << "x: " << me->super.x << std::endl;
    std::cout << "y: " << me->super.y << std::endl;
    std::cout << "width: " << me->width << std::endl;
    std::cout << "height: " << me->height << std::endl;
    return 0;
}

int Rectangle_area(Rectangle const * const me){
    return me->width * me->height;
}