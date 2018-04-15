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

Rectangulo::Rectangulo(float XPUno, float YPUno, float XPDos, float YPDos, float XPTres, float YPTres, float XPcuatro, float YPCuatro){

	this -> Xp1 = XPUno;
	this -> Yp1 = YPUno;
	this -> Xp2 = XPDos;
	this -> Yp2 = YPDos;
	this -> Xp3 = XPTres;
	this -> Yp3 = YPTres;
	this -> Xp4 = XPcuatro;
	this -> Yp4 = YPCuatro;

};

Rectangulo::~Rectangulo() {
	// TODO Auto-generated destructor stub
}


void Rectangulo::mostrarDatos(){

	cout << "Datos del Rectangulo: " << endl << endl;

	cout << "Punto (X1,Y1): (" << Xp1 << "," << Yp1 << ")" << endl;
	cout << "Punto (X2,Y2): (" << Xp2 << "," << Yp2 << ")" << endl;
	cout << "Punto (X3,Y3): (" << Xp3 << "," << Yp3 << ")" << endl;
	cout << "Punto (X4,Y4): (" << Xp4 << "," << Yp4 << ")" << endl;

};

void Rectangulo::TrasladarEjeX(float ValorX){

	this -> Xp1 = this -> Xp1 + ValorX;
	this -> Xp2 = this -> Xp2 + ValorX;
	this -> Xp3 = this -> Xp3 + ValorX;
	this -> Xp4 = this -> Xp4 + ValorX;

};

void Rectangulo::TrasladarEjeY(float ValorY){

	this -> Yp1 = this -> Yp1 + ValorY;
	this -> Yp2 = this -> Yp2 + ValorY;
	this -> Yp3 = this -> Yp3 + ValorY;
	this -> Yp4 = this -> Yp4 + ValorY;

};
