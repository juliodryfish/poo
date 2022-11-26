#include "animal.hpp"

int Animal::id_counter = 0;

Animal::Animal(char parm1, int parm2, int parm3, int parm4) {
    this->id = this->id_counter++;

    this->symbol = parm1;
    this->life_points = parm2;
    this->view_range = parm3;
    this->ttl = parm4;
}

std::ostream& operator<<(std::ostream& parm1, const Animal& parm2) {
    parm1   << "Animal> " 
            << "ID:" << parm2.id << " "
            << "SYMB:" << parm2.symbol << " " 
            << "HP:" << parm2.life_points << " " 
            << "VR:" << parm2.view_range << " " 
            << "TTL:" << parm2.ttl;
    return parm1;
}