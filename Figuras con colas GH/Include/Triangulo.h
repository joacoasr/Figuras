//============================================================================
// Name        : Trangulo.h
// Author      : Joaquin Gonzalez
// Version     : 1
// Copyright   : --
// Description : Clases, polimorfismo, herencia C++, Ansi-style
//============================================================================

#ifndef TRIANGULO_H_
#define TRIANGULO_H_

#include "FigurasGeometricas.h"

class Triangulo:public FigurasGeometricas{

	private:

		float PuntoX1, PuntoY1, PuntoX2, PuntoY2, PuntoX3, PuntoY3;

	public:

		Triangulo(float,float,float,float,float,float);
		virtual ~Triangulo();
		void mostrarDatos();
		void TrasladarEjeX(float);
		void TrasladarEjeY(float);

};

#endif /* TRIANGULO_H_ */
