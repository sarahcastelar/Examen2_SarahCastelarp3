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
	string nombre;
	e = new Escenario("Hola");


	int opcion = 0;
	while (opcion != 4){
		switch (opcion = menu()){ 
			case 1:
				//e->printMatrix();
				cout<<"cual es su nombre?"<<endl;
				cin>>nombre;
				e->printMatrix();
				cout<<"Ingrese coordenadas a mover (wasd)"<<endl;
				




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

