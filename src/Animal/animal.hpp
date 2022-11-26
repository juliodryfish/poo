#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal { // classe abstrata
static int id_counter;
public:
    Animal() = delete;
    Animal(char, int, int, int); 
        // construtor: 
            // parm1 = representação gráfica
            // parm2 = vida inicial
            // parm3 = view range
            // parm4 = tempo de vida

    virtual void test() = 0;

protected:
    int id;             // id do animal
    char symbol;        // representação gráfica do animal
    int life_points;    // vida do animal
    int view_range;     // view range do animal
    int ttl;            // tempo de vida do animal (número de passos até morrer)

public:
    friend std::ostream& operator<<(std::ostream&, const Animal&);
};

#endif