//============================================================================
// Name        : Trangulo.cpp
// Author      : Joaquin Gonzalez
// Version     : 3.1
// Copyright   : --
// Description : Clases, polimorfismo, herencia C++, Ansi-style
//============================================================================

#include "../include/Triangulo.h"

#include <iostream>
#include <math.h>

using namespace std;

Triangulo::Triangulo(float CX1,float CY1,float CX2,float CY2,float CX3,float CY3) {

	this -> PuntoX1 = CX1;
	this -> PuntoY1 = CY1;
	this -> PuntoX2 = CX2;
	this -> PuntoY2 = CY2;
	this -> PuntoX3 = CX3;
	this -> PuntoY3 = CY3;


};

Triangulo::~Triangulo() {

};

void Triangulo::mostrarDatos(){

	cout << "Datos del Triangulo: " << endl << endl;

	cout << "Punto (X1,Y1): (" << PuntoX1 << "," << PuntoY1 << ")" << endl;
	cout << "Punto (X2,Y2): (" << PuntoX2 << "," << PuntoY2 << ")" << endl;
	cout << "Punto (X3,Y3): (" << PuntoX3 << "," << PuntoY3 << ")" << endl;

};

void Triangulo::TrasladarEjeX(float ValorX){

	this -> PuntoX1 = this -> PuntoX1 + ValorX;
	this -> PuntoX2 = this -> PuntoX2 + ValorX;
	this -> PuntoX3 = this -> PuntoX3 + ValorX;

};

void Triangulo::TrasladarEjeY(float ValorY){

	this -> PuntoY1 = this -> PuntoY1 + ValorY;
	this -> PuntoY2 = this -> PuntoY2 + ValorY;
	this -> PuntoY3 = this -> PuntoY3 + ValorY;

};

