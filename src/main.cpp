#include <iostream>
#include "lib.h"
#include "lib1.hpp"


int main(int, char**){
    Object obj;
    obj.set_value(1);
    std::cout << obj.get_value() << std::endl;
    obj.output();

    lib1::hello_world();
    
    system("pause");
    return 0;
}
