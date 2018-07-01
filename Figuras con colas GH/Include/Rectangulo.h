//============================================================================
// Name        : Rectangulo.h
// Author      : Joaquin Gonzalez
// Version     : 1
// Copyright   : --
// Description : Clases, polimorfismo, herencia C++, Ansi-style
//============================================================================

#ifndef RECTANGULO_H_
#define RECTANGULO_H_

#include "FigurasGeometricas.h"

class Rectangulo:public FigurasGeometricas{

	private:

		Punto *p1, *p2, *p3, *p4;

	public:

		Rectangulo(Punto *, Punto *, Punto *, Punto *);
		virtual ~Rectangulo();
		void mostrarDatos();
		void TrasladarEjeX(float);
		void TrasladarEjeY(float);


};

#endif /* RECTANGULO_H_ */
