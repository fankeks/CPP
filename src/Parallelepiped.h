#ifndef _PARALLEPIPED_H
#define _PARALLEPIPED_H

#include "Rectangle.h"

typedef struct{
    Rectangle super;
    int z;
}Parallelepiped;

int Parallelepiped_ctor(Parallelepiped * const me, int x, int y, int width, int height, int z);
int Parallepiped_draw(Parallelepiped const * const me);
int Parallepiped_area(Parallelepiped const * const me);
int Parallepiped_volume(Parallelepiped const * const me);

#endif