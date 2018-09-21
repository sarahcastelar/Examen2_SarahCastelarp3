#include "Item.h"
#include "Escenario.h"
#include "Obstaculos.h"
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
	int random;
    bool si = true;
    Obstaculos* o;
	srand(time(NULL));

	/*
	 //crear matriz
    for (int i = 0; i < size; i++){
        tablero[i] = new Casilla*[size];

    }

    //inicializar matriz
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            tablero[i][j] = new CasillaTTT(new Marca('.'));
        }
    }



	*/
	for (int i = 0; i < filas; i++){
		for (int j = 0; j < col; j++){
            //poner los obstaculos siempre. 
            if ( (i%2!=0) && (j%2!=0)){
                o = new Obstaculos();
                matrix[i][j] = o;
            }else
				matrix[i][j] = NULL;
            si = false;
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
	}else
		cout<<"null";
	
}

