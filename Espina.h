#ifndef ESPINA_H
#define ESPINA_H
#include "Bomba.h"

class Espina : public Bomba{
    private:
        int cant;

    public:
        Espina();
        int getCant();
        void setCant(int);

};

#endif