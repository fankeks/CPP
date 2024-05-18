#include "lib.h"


int Object::get_value()
{
    return __value;
}


int Object::set_value(int value)
{
    __value = value;
    return 0;
}

void Object::output()
{
    std::cout << __value << std::endl;
}