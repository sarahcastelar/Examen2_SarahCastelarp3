#ifndef OBSTACULOS_H
#define OBSTACULOS_H
#include "Item.h"

class Obstaculos: public Item{
    private:
        char marca;

    public:
        Obstaculos();
        char getMarca();
        void toString();
        void _string();

};

#endif
