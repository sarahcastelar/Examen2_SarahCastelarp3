#include <iostream>
#include "Item.h"
#include "Escenario.h"
#include "Obstaculos.h"
using namespace std;


vector<Escenario*> escenario;
Escenario* e;

int menu (){
   int opcion = 0;
   while (true){
  	cout<<"	MENU" << endl
	<< "1. Mover" << endl
	<< "2. Actualizar" << endl
	<< "3. Poner" << endl
	<< "4. Salir" << endl
	<< "Ingrese una opcion: "<<endl;
	cin >> opcion;

	if (opcion < 1 || opcion > 4)
	   cout<<"Opcion incorrecta, intente de nuevo."<<endl;
	else 
	   return opcion;
   }
}


int main (){
	int opcion = 0;
	while (opcion != 4){
        e = new Escenario("Hola");

		switch (opcion = menu()){
			case 1:
				e->printMatrix();




			break;

			case 2:
				//ejercicio2();
			break;

			case 3:
				//ejercicio3();
			break;

		}
	 }
	return 0;
};

