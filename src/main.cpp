#include <iostream>
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Parallelepiped.h"


int main(int, char**){
    // Наследование
    std::cout << "Inheritance" << std::endl;
    Rectangle r1;
    Rectangle_ctor(&r1, 0, 1, 2, 3);
    Circle c1;
    Circle_ctor(&c1, 5, 6, 2);

    Rectangle_draw(&r1);
    Shape_change_coord((Shape *)&r1, 10, 11);
    Rectangle_draw(&r1);
    std::cout << std::endl;

    Circle_draw(&c1);
    Shape_change_coord((Shape *)&c1, 10, 11);
    Circle_draw(&c1);
    std::cout << std::endl;

    // Полиморфизм
    std::cout << "Polymorphism" << std::endl;
    Rectangle r2;
    Rectangle_ctor(&r2, 0, 1, 2, 3);
    Circle c2;
    Circle_ctor(&c2, 5, 6, 2);
    Parallelepiped p1;
    Parallelepiped_ctor(&p1, 1, 2, 3, 4, 5);

    Shape* figures[] = {(Shape *)&r2, (Shape *)&c2, (Shape *)&p1};
    DRAW_VCALL(figures[0]);
    DRAW_VCALL(figures[1]);
    DRAW_VCALL(figures[2]);

    std::cout << std::endl;
    std::cout << VOLUME_VCALL(figures[0]) << std::endl;
    std::cout << VOLUME_VCALL(figures[2]) << std::endl;

    system("pause");
    return 0;
}
