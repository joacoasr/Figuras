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

Triangulo::Triangulo(float CX1,float CY1,float CX2,float CY2,float CX3,float CY3) {

	this -> X1 = CX1;
	this -> Y1 = CY1;
	this -> X2 = CX2;
	this -> Y2 = CY2;
	this -> X3 = CX3;
	this -> Y3 = CY3;


};

Triangulo::~Triangulo() {

};

void Triangulo::mostrarDatos(){

	cout << "Datos del Triangulo: " << endl << endl;

	cout << "Punto (X1,Y1): (" << X1 << "," << Y1 << ")" << endl;
	cout << "Punto (X2,Y2): (" << X2 << "," << Y2 << ")" << endl;
	cout << "Punto (X3,Y3): (" << X3 << "," << Y3 << ")" << endl;

};

void Triangulo::TrasladarEjeX(float ValorX){

	this -> X1 = this -> X1 + ValorX;
	this -> X2 = this -> X2 + ValorX;
	this -> X3 = this -> X3 + ValorX;

};

void Triangulo::TrasladarEjeY(float ValorY){

	this -> Y1 = this -> Y1 + ValorY;
	this -> Y2 = this -> Y2 + ValorY;
	this -> Y3 = this -> Y3 + ValorY;

};

