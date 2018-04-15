//============================================================================
// Name        : TrianguloFactory.cpp
// Author      : Joaquin Gonzalez
// Version     : 1
// Copyright   : --
// Description : Clases, polimorfismo, herencia C++, Ansi-style
//============================================================================


#include "../Include/TrianguloFactory.h"

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
	float PX[3], PY[3];

	cout << "Ingrese los datos del Triangulo:\n " << endl;

	for( i = 0 ; i < 3 ; i++){

		PT[i] = new Punto();  //necesite crear el objeto e inicializarlo en algun valor
		cout << "Punto (X" << ( i + 1 ) << ",Y" << ( i + 1 ) << "):" << endl;
		cin >> PX[i]
			>> PY[i];

		PT[i] -> setPuntoX(PX[i]);
		PT[i] -> setPuntoY(PY[i]);

	}

	Triangulo *tri;
	tri = new Triangulo( PT[0]->getPuntoX(), PT[0]->getPuntoY(), PT[1]->getPuntoX(), PT[1]->getPuntoY(), PT[2]->getPuntoX(), PT[2]->getPuntoY() );

	FG = tri;

	return FG;

}
