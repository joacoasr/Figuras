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

	cout << "Ingrese las coordenadas de cada punto: " << endl;

	for( i = 0 ; i < 4 ; i++){

		PR[i] = new Punto();
		cout << "\nPunto " << ( i + 1 ) << ":\n";
		PR[i] -> CargarCoordenada();

	}

	Rectangulo *rect = new Rectangulo( PR );

	FG = rect;

	return FG;

}
void RectanguloFactory::MostrarFiguraACrear(){

	cout << "\nFigura a crear: Rectangulo. " << endl;

};
