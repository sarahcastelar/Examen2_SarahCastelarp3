#ifndef BOMBA_H
#define BOMBA_H
#include "Item.h"

class Bomba: public Item {
    private:
        int turnoExplotar;
    
    public:
        Bomba();
        int getTurnoTotal();
        void setTurnoTotal(int);
};

#endif