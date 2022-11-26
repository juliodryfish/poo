#ifndef CHIMERA_HPP
#define CHIMERA_HPP
#include "../animal.hpp"

#include <iostream>

class Chimera : public Animal {
public:
    Chimera(char parm1, int parm2, int parm3, int parm4) 
        : Animal(parm1, parm2, parm3, parm4) {};
    void test();
private:
};

#endif