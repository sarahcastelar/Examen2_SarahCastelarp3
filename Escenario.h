#ifndef ESCENARIO_H
#define ESCENARIO_H
#include "Item.h"
#include <iostream>
using namespace std;

#define filas 11
#define col 13

class Escenario {
    private:
        string nombre;
        Item*** matrix;
    
    public:
        Escenario(string);
        Item*** getMatrix();
        Item*** createMatrix();
        Item*** fillMatrix(Item***);
        //Item** updateMatriz();
        void freeMatrix(Item***);
        void printMatrix();
        void toString();
        ~Escenario();
        

};

#endif