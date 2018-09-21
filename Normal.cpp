#include "Normal.h"
#include <stdlib.h>
#include <time.h>
#include<iostream>
using namespace std;

Normal::Normal(){
    marca = 'B';
}

int Normal::getValorAlcance(){
    return valorAlcance;
}

void Normal::setValorAlcance(){
    srand(time(NULL));
    valorAlcance = 1 + rand() % (5 - 1);
}

void Normal::toString(){
    cout<<marca;
}
