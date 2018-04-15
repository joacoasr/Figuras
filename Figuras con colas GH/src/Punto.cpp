//============================================================================
// Name        : Punto.cpp
// Author      : Joaquin Gonzalez
// Version     : 1
// Copyright   : --
// Description : Clases, polimorfismo, herencia C++, Ansi-style
//============================================================================

#include "../Include/Punto.h"

using namespace std;

Punto::~Punto() {
}

void Punto::setPuntoX(float PX){

	this -> X = PX;

};
void Punto::setPuntoY(float PY){

	this -> Y = PY;

};
void Punto::setRadio(float Rad){

	this -> Radio = Rad;

};
float Punto::getPuntoX(){

	return(this->X);

};
float Punto::getPuntoY(){

	return(this->Y);

};
float Punto::getRadio(){

	return(this->Radio);

};
