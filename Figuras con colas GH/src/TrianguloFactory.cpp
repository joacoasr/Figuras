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

	cout << "Ingrese las coordenadas de cada punto: " << endl;
	for( i = 0 ; i < 3 ; i++){

		PT[i] = new Punto();  //necesite crear el objeto e inicializarlo en algun valor
		cout << "\nPunto " << ( i + 1 ) << ":" << endl;
		PT[i] -> CargarCoordenada();

	}

	Triangulo *tri = new Triangulo(PT);

	FG = tri;

	return FG;

}
void TrianguloFactory::MostrarFiguraACrear(){

	cout << "\nFigura a crear: Triangulo. " << endl;

};
