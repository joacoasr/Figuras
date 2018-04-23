//============================================================================
// Name        : RectanguloFactory.cpp
// Author      : Joaquin Gonzalez
// Version     : 1
// Copyright   : --
// Description : Clases, polimorfismo, herencia C++, Ansi-style
//============================================================================


#include "../Include/RectanguloFactory.h"

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
	float PX[4],PY[4];

	cout << "Ingrese los puntos del rectangulo:\n " << endl;

	for( i = 0 ; i < 4 ; i++){

		PR[i] = new Punto();  //necesite crear el objeto e inicializarlo en algun valor
		cout << "Punto (X" << ( i + 1 ) << ",Y" << ( i + 1 ) << "):" << endl;
		cin >> PX[i]
			>> PY[i];

		PR[i] -> setPuntoX(PX[i]);
		PR[i] -> setPuntoY(PY[i]);

	}

	Rectangulo *rect;
	rect = new Rectangulo( PR[0]->getPuntoX(), PR[0]->getPuntoY(), PR[1]->getPuntoX(), PR[1]->getPuntoY(), PR[2]->getPuntoX(), PR[2]->getPuntoY(), PR[3]->getPuntoX(), PR[3]->getPuntoY() );

	FG = rect;

	return FG;

}
void RectanguloFactory::MostrarFiguraACrear(){

	cout << "\nFigura a crear: Rectangulo. " << endl;

};
