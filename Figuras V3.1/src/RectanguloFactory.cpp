//============================================================================
// Name        : RectanguloFactory.cpp
// Author      : Joaquin Gonzalez
// Version     : 3.1
// Copyright   : --
// Description : Clases, polimorfismo, herencia C++, Ansi-style
//============================================================================


#include "../include/RectanguloFactory.h"

#include <iostream>

using namespace std;

/*RectanguloFactory::RectanguloFactory() {
	// TODO Auto-generated constructor stub

}*/

RectanguloFactory::~RectanguloFactory() {
	// TODO Auto-generated destructor stub
}

FigurasGeometricas *RectanguloFactory::CrearFigura(){

	int i;

	FigurasGeometricas *FG;
	Punto *PR[4];

	cout << "Ingrese los puntos del rectangulo:\n " << endl;

	for( i = 0 ; i < 4 ; i++){

		PR[i] = new Punto(0,0,0);  //necesite crear el objeto e inicializarlo en algun valor
		cout << "Punto (X" << ( i + 1 ) << ",Y" << ( i + 1 ) << "):" << endl;
		cin >> PR[i] -> X
			>> PR[i] -> Y;

	}

	Rectangulo *rect;
	rect = new Rectangulo(PR[0]->X,PR[0]->Y,PR[1]->X,PR[1]->Y,PR[2]->X,PR[2]->Y,PR[3]->X,PR[3]->Y);

	FG = rect;

	return FG;

}
