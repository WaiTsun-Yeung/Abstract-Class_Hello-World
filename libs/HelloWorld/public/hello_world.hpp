#ifndef HELLO_WORLD_HPP
#define HELLO_WORLD_HPP

    #include "printables.hpp"

    namespace hello_world{
        class HelloWorld : printables::Printables{
            public:
                void print() const override;
        };
    }

#endif // HELLO_WORLD_HPP