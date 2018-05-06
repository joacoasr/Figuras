//============================================================================
// Name        : CirculoFactory.cpp
// Author      : Joaquin Gonzalez
// Version     : 1
// Copyright   : --
// Description : Clases, polimorfismo, herencia C++, Ansi-style
//============================================================================

#include "../Include/CirculoFactory.h"

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
	PC = new Punto();

	float PX, PY, PRad;

	cout << "Ingrese los datos del Circulo:\n " << endl;
	cout << "Punto (X,Y):" << endl;
	cin >> PX
		>> PY;
	cout << "Radio: " << endl;
	cin >> PRad;

	PC -> setPuntoX(PX);
	PC -> setPuntoY(PY);
	PC -> setRadio(PRad);

	Circulo *cir;
	cir = new Circulo( PC->getPuntoX(), PC->getPuntoY(), PC->getRadio() );

	FG = cir;

	return FG;

}
void CirculoFactory::MostrarFiguraACrear(){

	cout << "\nFigura a crear: Circulo." << endl;

};
