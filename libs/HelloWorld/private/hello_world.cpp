#include <iostream>

#include "hello_world.hpp"

namespace hello_world{
    void HelloWorld::print() const{
        std::cout << "Hello, World!\n";
    }
}