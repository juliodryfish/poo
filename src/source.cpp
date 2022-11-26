#include <iostream>
#include "./Simulator/simulator.hpp"

#include "./Animal/Sheep/sheep.hpp"
#include "./Animal/Wolf/wolf.hpp"

Animal * cospeOvelhas() {
    return new Sheep('S', 1,2,3);
}
Animal * cospeLobos() {
    return new Wolf('W', 2,3,4);
}

int main(int argc, char ** argv) {

    // TODO: destruir os Animais

    Reserve teste = Reserve(5, 200);

    teste.addAnimal(cospeOvelhas());
    teste.addAnimal(cospeLobos());
    teste.addAnimal(cospeOvelhas());
    teste.addAnimal(cospeLobos());
    teste.addAnimal(cospeOvelhas());
    teste.addAnimal(cospeLobos());

    std::cout << teste;

    return 0;
}