#ifndef WOLF_HPP
#define WOLF_HPP
#include "../animal.hpp"

#include <iostream>

class Wolf : public Animal {
public:
    Wolf(char parm1, int parm2, int parm3, int parm4) 
        : Animal(parm1, parm2, parm3, parm4) {};

    void test();
private:
};

#endif