#ifndef ITEM_H
#define ITEM_H
#include <vector>
#include <iostream>
using namespace std;

class Bomba;

class Item{
    private:
        vector<Bomba*> listaBombas;

    public:
        char marca;

    public:
        Item();
        int getX();
        int getY();
        virtual void toString()=0;

};

#endif