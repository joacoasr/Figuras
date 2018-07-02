//============================================================================
// Name        : Punto.cpp
// Author      : Joaquin Gonzalez
// Version     : 3.1
// Copyright   : --
// Description : Clases, polimorfismo, herencia C++, Ansi-style
//============================================================================

#include "../include/Punto.h"

#include <iostream>

using namespace std;


Punto::~Punto() {
	// TODO Auto-generated destructor stub
}

void Punto::setPuntoX( float PX ){

	this -> x = PX;

}
void Punto::setPuntoY( float PY ){

	this -> y = PY;

}

float Punto::getPuntoX(){

	return(this->x);

}
float Punto::getPuntoY(){

	return(this->y);

}
void Punto::CargarDatos()
{
	cout << "Ingrese la coordenada x:";
	cin >> this -> x;
	cout << "Ingrese la coordenada y:";
	cin >> this -> y;
}
