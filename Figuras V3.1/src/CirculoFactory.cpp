//============================================================================
// Name        : CirculoFactory.cpp
// Author      : Joaquin Gonzalez
// Version     : 3.1
// Copyright   : --
// Description : Clases, polimorfismo, herencia C++, Ansi-style
//============================================================================

#include "../include/CirculoFactory.h"

#include <iostream>


using namespace std;

/*CirculoFactory::CirculoFactory() {

}*/

CirculoFactory::~CirculoFactory() {
	// TODO Auto-generated destructor stub
}

FigurasGeometricas *CirculoFactory::CrearFigura(){

	FigurasGeometricas *FG;
	Punto *PC;

	float PX,PY,Rad;

	cout << "Ingrese los datos del Circulo:\n " << endl;

	PC = new Punto();  //necesite crear el objeto e inicializarlo en algun valor
	cout << "Punto (X,Y):" << endl;
	cin >> PX
		>> PY;
	cout << "Radio: " << endl;
	cin >> Rad;

	PC -> setPuntoX(PX);
	PC -> setPuntoY(PY);
	PC -> setRadio(Rad);

	Circulo *cir;
	cir = new Circulo( PC->getPuntoX(), PC->getPuntoY(), PC->getRadio() );

	FG = cir;

	return FG;

}
void CirculoFactory::mostrarFiguraACrear(){

	cout << "\nFigura a crear: Circulo." << endl;

};
