#include "reserve.hpp"
#include <algorithm>

std::ostream& operator<<(std::ostream& parm1, const Reserve& parm2) {
    parm1   << "Reserva> " 
            << "NC:" << parm2.NC << " "
            << "NL:" << parm2.NL << " "
            << "SZ:" << parm2.animals.size() << std::endl;
    for(auto a : parm2.animals) {
        (a.first)->test();
        parm1<<std::endl;
        parm1 << *(a.first) << std::endl;
    }
    return parm1;
}

Reserve::Reserve(int parm1, int parm2) {
    this->NL = std::clamp(parm1, 16, 500);
    this->NC = std::clamp(parm2, 16, 500);
}

bool Reserve::addAnimal(Animal * parm1) {
    animals.push_back(std::make_pair(parm1, pos_t{0, 0}));
    return true;
}