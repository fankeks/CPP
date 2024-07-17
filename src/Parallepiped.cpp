#include "Parallelepiped.h"
#include <iostream>


int Parallelepiped_ctor(Parallelepiped * const me, int x, int y, int width, int height, int z){
    struct ShapeVtable vtable = {
        (int (*)(Shape const * const me))(Parallepiped_draw),
        (int (*)(Shape const * const me))(Parallepiped_area),
    };
    static const struct RectangleVTable vtable1 = {
        vtable,
        (int (*)(Rectangle const * const me))(Parallepiped_volume),
    };
    Rectangle_ctor(&(me->super), x, y, width, height);
    me->super.super.vptr = (struct ShapeVtable* ) &vtable1;

    me->z = z;
    return 0;
}
int Parallepiped_draw(Parallelepiped const * const me){
    std::cout << "Parallepiped" << std::endl;
    std::cout << "x: " << me->super.super.x << std::endl;
    std::cout << "y: " <<  me->super.super.y << std::endl;
    std::cout << "width: " << me->super.width << std::endl;
    std::cout << "height: " << me->super.height << std::endl;
    std::cout << "z: " << me->z << std::endl;
    return 0;
}
int Parallepiped_area(Parallelepiped const * const me){
    return me->super.height * me->super.width;
}
int Parallepiped_volume(Parallelepiped const * const me){
    return me->super.height * me->super.width * me->z;
}