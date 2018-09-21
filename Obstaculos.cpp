#include "Obstaculos.h"

Obstaculos::Obstaculos(){
    marca = 'o';
}

char Obstaculos::getMarca(){
    return marca;
}

void Obstaculos::toString(){
    cout<<marca;
}

void Obstaculos::_string(){
    cout<<"hola";
}