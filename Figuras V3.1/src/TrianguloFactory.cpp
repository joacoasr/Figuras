//============================================================================
// Name        : TrianguloFactory.cpp
// Author      : Joaquin Gonzalez
// Version     : 3.1
// Copyright   : --
// Description : Clases, polimorfismo, herencia C++, Ansi-style
//============================================================================


#include "../include/TrianguloFactory.h"

#include <iostream>

using namespace std;

/*TrianguloFactory::TrianguloFactory() {
	// TODO Auto-generated constructor stub

}*/

TrianguloFactory::~TrianguloFactory() {
	// TODO Auto-generated destructor stub
}

FigurasGeometricas *TrianguloFactory::CrearFigura(){

	int i;

	FigurasGeometricas *FG;

	Punto *PT[3];

	cout << "Ingrese los datos del Triangulo:\n " << endl;

	for( i = 0 ; i < 3 ; i++){

		PT[i] = new Punto(0,0,0);  //necesite crear el objeto e inicializarlo en algun valor
		cout << "Punto (X" << ( i + 1 ) << ",Y" << ( i + 1 ) << "):" << endl;
		cin >> PT[i] -> X
			>> PT[i] -> Y;

	}

	Triangulo *tri;
	tri = new Triangulo(PT[0]->X,PT[0]->Y,PT[1]->X,PT[1]->Y,PT[2]->X,PT[2]->Y);

	FG = tri;

	return FG;

}
