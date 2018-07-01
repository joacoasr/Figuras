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

Rectangulo::Rectangulo(Punto *_p1, Punto *_p2, Punto *_p3, Punto *_p4){

	this -> p1 = _p1;
	this -> p2 = _p2;
	this -> p3 = _p3;
	this -> p4 = _p4;

};

Rectangulo::~Rectangulo() {
	// TODO Auto-generated destructor stub
}


void Rectangulo::mostrarDatos(){

	cout << "Datos del Rectangulo: " << endl << endl;

	cout << "Punto [x1,y1]: [" << this -> p1 -> getPuntoX() << "," << this -> p1 -> getPuntoY() << "]" << endl;
	cout << "Punto [x2,y2]: [" << this -> p2 -> getPuntoX() << "," << this -> p2 -> getPuntoY() << "]" << endl;
	cout << "Punto [x3,y3]: [" << this -> p3 -> getPuntoX() << "," << this -> p3 -> getPuntoY() << "]" << endl;
	cout << "Punto [x4,y4]: [" << this -> p4 -> getPuntoX() << "," << this -> p4 -> getPuntoY() << "]" << endl;

};

void Rectangulo::TrasladarEjeX(float ValorX){

	this -> p1 -> setPuntoX( this -> p1 -> getPuntoX() + ValorX );
	this -> p2 -> setPuntoX( this -> p2 -> getPuntoX() + ValorX );
	this -> p3 -> setPuntoX( this -> p3 -> getPuntoX() + ValorX );
	this -> p4 -> setPuntoX( this -> p4 -> getPuntoX() + ValorX );

};

void Rectangulo::TrasladarEjeY(float ValorY){

	this -> p1 -> setPuntoY( this -> p1 -> getPuntoY() + ValorY );
	this -> p2 -> setPuntoY( this -> p2 -> getPuntoY() + ValorY );
	this -> p3 -> setPuntoY( this -> p3 -> getPuntoY() + ValorY );
	this -> p4 -> setPuntoY( this -> p4 -> getPuntoY() + ValorY );

};
