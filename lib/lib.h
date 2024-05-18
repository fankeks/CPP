#pragma once

#include <iostream>


class Object
{
public:
    int __value;
    int get_value();
    int set_value(int value);
    void output();
};