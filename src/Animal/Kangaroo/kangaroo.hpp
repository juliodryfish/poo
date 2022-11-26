#ifndef KANGAROO_HPP
#define KANGAROO_HPP
#include "../animal.hpp"

#include <iostream>

class Kangaroo : public Animal {
public:
    Kangaroo(char parm1, int parm2, int parm3, int parm4) 
        : Animal(parm1, parm2, parm3, parm4) {};
    void test();
private:
};

#endif