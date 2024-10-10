#ifndef PRINTABLES_HPP
#define PRINTABLES_HPP

    namespace printables{
        class Printables{
            public:
                Printables();
                virtual ~Printables();
                virtual void print() const = 0;
        };
    }

#endif // PRINTABLES_HPP