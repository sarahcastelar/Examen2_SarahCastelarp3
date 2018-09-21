#include "Item.h"
#include "Escenario.h"
#include "Obstaculos.h"
#include "Normal.h"
#include <typeinfo>

Escenario::Escenario(string nombre){
    matrix = createMatrix();
    matrix = fillMatrix(matrix);
    this->nombre = nombre;
     
}

Item*** Escenario::getMatrix(){
    return matrix;
}


Item*** Escenario::createMatrix(){
	Item*** retVal = new Item**[filas];

	for (int i = 0; i < col; i++){
		retVal[i] = new Item* [col];
	}
	return retVal;
}

Item*** Escenario::fillMatrix(Item*** matrix){
	int random, random2, c = 0;
    Obstaculos* o;
	srand(time(NULL));
	Normal* b;

	for (int i = 0; i < filas; i++){
		for (int j = 0; j < col; j++){
            //poner los obstaculos siempre. 
            if ( (i%2!=0) && (j%2!=0)){
                o = new Obstaculos();
                matrix[i][j] = o;
            }else
				matrix[i][j] = NULL;

			//poner bombas randomnllyy
			random = 1 + rand() % (11 - 1);
			random2 = 1 + rand() % (11 - 1);

			while (c < 4){
				b = new Normal();
				matrix[random][random2] = b;
			}

            
		}
	}
	return matrix;
}

void Escenario::freeMatrix(Item*** matrix){
	for (int i = 0; i < filas; i++){
		delete [] matrix[i];
	}
	delete [] matrix;
}


void Escenario::printMatrix(){
	Obstaculos* o;
	if (matrix!=NULL){
		for (int i = 0; i < filas; i++){
			for (int j = 0; j < col; j++){
				o = dynamic_cast<Obstaculos*>(matrix[i][j]);
				if (o != NULL){
					cout<<" [";
					o->toString();
					cout<<"]";
						
				}else
					cout<<" ["<<matrix[i][j]<<"]";
				}
			
			cout<<endl;
		}
	}
	
}

Escenario::~Escenario(){
	if (matrix!=NULL){
        //liberar contenido de la matriz
        for(int i = 0; i < filas; i++){
            for (int j = 0; j < col; j++){
                delete matrix[i][j];
                matrix [i][j] = NULL;
            }
            /*
                liberar el arreglo de las filas 
                delete[] tablero [i];
                tablero[i] = NULL;
            */
        }

        for (int i = 0; i < filas; i++){
            for (int j = 0; j < col; j++){
                delete[] matrix [i]; //si no pongo corchetes al delete solo libera el first de cada arreglo.
                matrix[i] = NULL;
            }
        }

        delete [] matrix;
	}
}

