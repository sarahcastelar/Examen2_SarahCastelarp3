#include "Normal.h"
#include <stdlib.h>
#include <time.h>
#include<iostream>
using namespace std;

Normal::Normal(){

}

int Normal::getValorAlcance(){
    return valorAlcance;
}

void Normal::setValorAlcance(){
    srand(time(NULL));
    valorAlcance = 1 + rand() % (5 - 1);
}

/*

 
int main()
{
    int num, c;
    
    
    for(c = 1; c <= 10; c++)
    {
        num = 1 + rand() % (11 - 1);
        cout << num<< " ";
    }


*/