#include "Bomba.h"

Bomba::Bomba(){
    turnoExplotar = 3;

}

int Bomba::getTurnoTotal(){
    return turnoExplotar;
}

void Bomba::setTurnoTotal(int turno){
    turnoExplotar = turno;
}

void Bomba::toString(){
    cout<<marca;
}