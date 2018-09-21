#ifndef NORMAL_H
#define NORMAL_H
#include "Bomba.h"

class Normal: public Bomba{
    
    private:
        int valorAlcance;

    public:
        Normal();
        int getValorAlcance();
        void setValorAlcance();
        virtual void toString();
        

};

#endif