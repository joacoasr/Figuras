//============================================================================
// Name        : Rectangulo.cpp
// Author      : Joaquin Gonzalez
// Version     : 1
// Copyright   : --
// Description : Clases, polimorfismo, herencia C++, Ansi-style
//============================================================================

#include "../Include/Rectangulo.h"

#include <iostream>


using namespace std;

Rectangulo::Rectangulo(Punto *_VecPuntos[]){

	for( int i = 0 ; i < 4 ; i++ )
	{

		this -> VecPuntos[i] = _VecPuntos[i];

	}
};

Rectangulo::~Rectangulo() {
	// TODO Auto-generated destructor stub
}


void Rectangulo::mostrarDatos(){

	cout << "Datos del Rectangulo: " << endl << endl;

	for( int i = 0 ; i < 4 ; i++ )
	{

		cout << "Punto [x" << (i+1) << ",y" << (i+1) << "]: [" << this -> VecPuntos[i] -> getPuntoX() << "," << this -> VecPuntos[i] -> getPuntoY() << "]" << endl;

	}
};

void Rectangulo::TrasladarEjeX(float ValorX){

	for ( int i = 0 ; i < 4 ; i++ )
	{

		this -> VecPuntos[i] -> setPuntoX( this -> VecPuntos[i] -> getPuntoX() + ValorX );

	}
};

void Rectangulo::TrasladarEjeY(float ValorY){

	for ( int i = 0 ; i < 4 ; i++ )
	{

		this -> VecPuntos[i] -> setPuntoY( this -> VecPuntos[i] -> getPuntoY() + ValorY );

	}
};
