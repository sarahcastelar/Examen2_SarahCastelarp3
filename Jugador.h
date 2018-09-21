#ifndef JUGADOR_H
#define JUGADOR_H
#include "Item.h"
#include <iostream>
using namespace std;

class Jugador: public Item{

    private:
        string nombre;
        bool vivo;
        bool player;

    public:
        Jugador(string,bool,bool);
        virtual void toString();
        
};

#endif
