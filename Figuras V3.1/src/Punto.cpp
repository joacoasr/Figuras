//============================================================================
// Name        : Punto.cpp
// Author      : Joaquin Gonzalez
// Version     : 3.1
// Copyright   : --
// Description : Clases, polimorfismo, herencia C++, Ansi-style
//============================================================================

#include "../include/Punto.h"

using namespace std;

/*Punto::Punto( float PX, float PY, float R ) {

	this -> X = PX;
	this -> Y = PY;
	this -> Radio = R;

}*/

Punto::~Punto() {
	// TODO Auto-generated destructor stub
}

void Punto::setPuntoX( float PX ){

	this -> X = PX;

}
void Punto::setPuntoY( float PY ){

	this -> Y = PY;

}
void Punto::setRadio(float Rad){

	this -> Radio = Rad;

}
float Punto::getPuntoX(){

	return(this->X);

}
float Punto::getPuntoY(){

	return(this->Y);

}
float Punto::getRadio(){

	return (this->Radio);

};
