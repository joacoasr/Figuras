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

	this -> coordenadaX = coorX;
	this -> coordenadaY = coorY;
	this -> radio = Rad;

};

Circulo::~Circulo() {

};
void Circulo::mostrarDatos(){

	cout << "Datos del Circulo: " << endl << endl;

	cout << "Centro ubicado en (X,Y): (" <<coordenadaX <<","<< coordenadaY <<")"<< endl;
	cout << "Radio: " << radio << endl;

};

void Circulo::TrasladarEjeX(float ValorX){

	this -> coordenadaX = this -> coordenadaX + ValorX;

};

void Circulo::TrasladarEjeY(float ValorY){

	this -> coordenadaY = this -> coordenadaY + ValorY;

};

