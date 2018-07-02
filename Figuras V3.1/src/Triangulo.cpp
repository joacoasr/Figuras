//============================================================================
// Name        : Trangulo.cpp
// Author      : Joaquin Gonzalez
// Version     : 3.1
// Copyright   : --
// Description : Clases, polimorfismo, herencia C++, Ansi-style
//============================================================================

#include "../include/Triangulo.h"

#include <iostream>
#include <math.h>

using namespace std;

Triangulo::Triangulo(Punto *_VecPuntos[]) {

	for ( int i = 0 ; i < 3 ; i++ )
	{
		this -> VecPuntos[i] = _VecPuntos[i];
	}

};

Triangulo::~Triangulo() {

};

void Triangulo::mostrarDatos(){

	cout << "Datos del Triangulo: " << endl << endl;

	for( int i = 0 ; i < 3 ; i++ )
	{

		cout << "Punto [x" << (i+1) << ",y" << (i+1) << "]: [" << this -> VecPuntos[i] -> getPuntoX() << "," << this -> VecPuntos[i] -> getPuntoY() << "]" << endl;

	}
};

void Triangulo::TrasladarEjeX(float ValorX){

	for ( int i = 0 ; i < 3 ; i++ )
	{

		this -> VecPuntos[i] -> setPuntoX( this -> VecPuntos[i] -> getPuntoX() + ValorX );

	}
};

void Triangulo::TrasladarEjeY(float ValorY){

	for ( int i = 0 ; i < 3 ; i++ )
	{

		this -> VecPuntos[i] -> setPuntoY( this -> VecPuntos[i] -> getPuntoY() + ValorY );

	}
};

