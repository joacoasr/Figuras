//============================================================================
// Name        : Circulo.cpp
// Author      : Joaquin Gonzalez
// Version     : 3.1
// Copyright   : --
// Description : Clases, polimorfismo, herencia C++, Ansi-style
//============================================================================

#include "../include/Circulo.h"

#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

Circulo::Circulo(Punto *_p, float Rad) {

	this -> p = _p;
	this -> radio = Rad;

};

Circulo::~Circulo() {

};
void Circulo::mostrarDatos(){

	cout << "Datos del Circulo: " << endl << endl;

	cout << "Centro ubicado en [x,y]: [" << this -> p -> getPuntoX() <<","<< this -> p -> getPuntoY() <<"]"<< endl;
	cout << "Radio: " << radio << endl;

};

void Circulo::TrasladarEjeX(float ValorX){

	this -> p -> setPuntoX( this -> p -> getPuntoX() + ValorX );

};

void Circulo::TrasladarEjeY(float ValorY){

	this -> p -> setPuntoY( this -> p -> getPuntoY() + ValorY );

};

