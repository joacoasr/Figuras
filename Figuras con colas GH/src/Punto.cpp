//============================================================================
// Name        : Punto.cpp
// Author      : Joaquin Gonzalez
// Version     : 1
// Copyright   : --
// Description : Clases, polimorfismo, herencia C++, Ansi-style
//============================================================================

#include "../Include/Punto.h"

using namespace std;

Punto::Punto( float PX, float PY, float R ) {

	this -> X = PX;
	this -> Y = PY;
	this -> Radio = R;

}

Punto::~Punto() {
	// TODO Auto-generated destructor stub
}

