#include <iostream>

#include "hello_world.hpp"

namespace hello_world{
    HelloWorld::HelloWorld() : Printables(){
        std::cout << "An instantiation of HelloWorld is created.\n";
    }
    HelloWorld::~HelloWorld(){
        std::cout << "An instantiation of HelloWorld is destroyed.\n";
    }
    void HelloWorld::print() const{
        std::cout << "Hello, World!\n";
    }
}