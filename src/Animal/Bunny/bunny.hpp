#ifndef BUNNY_HPP
#define BUNNY_HPP
#include "../animal.hpp"

#include <iostream>

class Bunny : public Animal {
public:
    Bunny(char parm1, int parm2, int parm3, int parm4) 
        : Animal(parm1, parm2, parm3, parm4) {};
    void test();
private:
};

#endif