#include "Obstaculos.h"
#include "Item.h"

Obstaculos::Obstaculos(){
    marca = 'o';
}

char Obstaculos::getMarca(){
    return marca;
}

void Obstaculos::toString(){
    cout<<marca;
}
