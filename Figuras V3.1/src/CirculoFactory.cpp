//============================================================================
// Name        : CirculoFactory.cpp
// Author      : Joaquin Gonzalez
// Version     : 3.1
// Copyright   : --
// Description : Clases, polimorfismo, herencia C++, Ansi-style
//============================================================================

#include <iostream>

#include "CirculoFactory.h"

using namespace std;

/*CirculoFactory::CirculoFactory() {

}*/

CirculoFactory::~CirculoFactory() {
	// TODO Auto-generated destructor stub
}

FigurasGeometricas *CirculoFactory::CrearFigura(){

	FigurasGeometricas *FG;
	Punto *PC;

	cout << "Ingrese los datos del Circulo:\n " << endl;

	PC = new Punto(0,0,0);  //necesite crear el objeto e inicializarlo en algun valor
	cout << "Punto (X,Y):" << endl;
	cin >> PC -> X
		>> PC -> Y;
	cout << "Radio: " << endl;
	cin >> PC -> Radio;

	Circulo *cir;
	cir = new Circulo(PC->X,PC->Y, PC->Radio);

	FG = cir;

	return FG;

}
