//============================================================================
// Name        : Circulo.cpp
// Author      : Joaquin Gonzalez
// Version     : 1
// Copyright   : --
// Description : Clases, polimorfismo, herencia C++, Ansi-style
//============================================================================

#include "../Include/Circulo.h"

#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

Circulo::Circulo(float coorX, float coorY, float Rad) {

	this -> X = coorX;
	this -> Y = coorY;
	this -> radio = Rad;

};

Circulo::~Circulo() {

};
void Circulo::mostrarDatos(){

	cout << "Datos del Circulo: " << endl << endl;

	cout << "Centro ubicado en (X,Y): (" << X <<","<< Y <<")"<< endl;
	cout << "Radio: " << radio << endl;

};

void Circulo::TrasladarEjeX(float ValorX){

	this -> X = this -> X + ValorX;

};

void Circulo::TrasladarEjeY(float ValorY){

	this -> Y = this -> Y + ValorY;

};

