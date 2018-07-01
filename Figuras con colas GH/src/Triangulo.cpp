//============================================================================
// Name        : Trangulo.cpp
// Author      : Joaquin Gonzalez
// Version     : 1
// Copyright   : --
// Description : Clases, polimorfismo, herencia C++, Ansi-style
//============================================================================

#include "../Include/Triangulo.h"

#include <iostream>
#include <math.h>

using namespace std;

Triangulo::Triangulo(Punto *_p1, Punto *_p2, Punto *_p3) {

	this -> p1 = _p1;
	this -> p2 = _p2;
	this -> p3 = _p3;

};

Triangulo::~Triangulo() {

};

void Triangulo::mostrarDatos(){

	cout << "Datos del Triangulo: " << endl << endl;

	cout << "Punto [x1,y1]: [" << this -> p1 -> getPuntoX() << "," << this -> p1 -> getPuntoY() << "]" << endl;
	cout << "Punto [X2,Y2]: [" << this -> p2 -> getPuntoX() << "," << this -> p2 -> getPuntoY() << "]" << endl;
	cout << "Punto [X3,Y3]: [" << this -> p3 -> getPuntoX() << "," << this -> p3 -> getPuntoY() << "]" << endl;

};

void Triangulo::TrasladarEjeX(float ValorX){

	this -> p1 -> setPuntoX( this -> p1 -> getPuntoX() + ValorX );
	this -> p2 -> setPuntoX( this -> p2 -> getPuntoX() + ValorX );
	this -> p3 -> setPuntoX( this -> p3 -> getPuntoX() + ValorX );

};

void Triangulo::TrasladarEjeY(float ValorY){

	this -> p1 -> setPuntoY( this -> p1 -> getPuntoY() + ValorY );
	this -> p2 -> setPuntoY( this -> p2 -> getPuntoY() + ValorY );
	this -> p3 -> setPuntoY( this -> p3 -> getPuntoY() + ValorY );

};

