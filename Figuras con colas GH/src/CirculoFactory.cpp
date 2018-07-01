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
	Punto *PC = new Punto();
	float PRad;

	cout << "Ingrese las coordenadas del centro del circulo: " << endl;
	PC -> CargarCoordenada();
	cout << "Radio: ";
	cin >> PRad;

	Circulo *cir = new Circulo(PC, PRad);

	FG = cir;

	return FG;

}
void CirculoFactory::MostrarFiguraACrear(){

	cout << "\nFigura a crear: Circulo." << endl;

};
