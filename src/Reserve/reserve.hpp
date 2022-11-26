#ifndef RESERVE_H
#define RESERVE_H

#include <iostream>
#include <vector>
#include <array>
#include <map>

#include "../Animal/animal.hpp"

class Reserve{
public:
    Reserve() = delete; // não vamos usar o constructor default
    Reserve(int, int);  // construtor: parm1 = número de linhas, parm2 = número de colunas

    bool addAnimal(Animal *); // parm1 = ponteiro para o Animal a adiionar

private:
    int NL; // número de linhas
    int NC; // número de colunas

    using pos_t = std::array<int, 2>;           // para dar menos trabalho a escrever
    using animal_t = std::pair<Animal *, pos_t>;  // cada entrada é um animal e a sua posição
    using animals_t = std::vector<animal_t>;
    animals_t animals; // container com todos os animais

public:
    friend std::ostream& operator<<(std::ostream&, const Reserve&);
};

#endif