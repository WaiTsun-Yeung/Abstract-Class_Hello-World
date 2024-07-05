#include <iostream>

#include "printables.hpp"

namespace printables{
    Printables::Printables(){
        std::cout << "A derived class of Printables is instantiated.\n";
    }
    Printables::~Printables(){
        std::cout 
            << "An instantiation of a derived class of Printables "
            << "is destroyed.\n";
    }
}