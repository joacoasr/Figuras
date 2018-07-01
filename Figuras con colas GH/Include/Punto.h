//============================================================================
// Name        : Punto.h
// Author      : Joaquin Gonzalez
// Version     : 1
// Copyright   : --
// Description : Clases, polimorfismo, herencia C++, Ansi-style
//============================================================================

#ifndef PUNTO_H_
#define PUNTO_H_

#include <iostream>

class Punto {

	private:

		float X, Y;

	public:

		virtual ~Punto();
		void CargarCoordenada();
		float getPuntoX();
		float getPuntoY();
		void setPuntoX(float);
		void setPuntoY(float);

};

#endif /* PUNTO_H_ */
