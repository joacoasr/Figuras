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

	float Rad;

	cout << "Ingrese los datos del Circulo: " << endl;
	PC = new Punto();
	cout << "\nCentro ubicado en:" << endl;
	PC -> CargarDatos();
	cout << "Radio: ";
	cin >> Rad;

	Circulo *cir = new Circulo( PC, Rad );

	FG = cir;

	return FG;

}
void CirculoFactory::mostrarFiguraACrear(){

	cout << "\nFigura a crear: Circulo." << endl;

};
