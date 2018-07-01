//============================================================================
// Name        : Punto.cpp
// Author      : Joaquin Gonzalez
// Version     : 1
// Copyright   : --
// Description : Clases, polimorfismo, herencia C++, Ansi-style
//============================================================================

#include "../Include/Punto.h"

using namespace std;

Punto::~Punto()
{
}

void Punto::setPuntoX(float PX)
{

	this -> X = PX;

};
void Punto::setPuntoY(float PY)
{

	this -> Y = PY;

};

float Punto::getPuntoX()
{

	return(this->X);

};
float Punto::getPuntoY()
{

	return(this->Y);

};
void Punto::CargarCoordenada()
{

	cout << "Ingrese la coordenada x:";
	cin >> this->X;
	cout << "Ingrese la coordenada y:";
	cin >> this->Y;

}
