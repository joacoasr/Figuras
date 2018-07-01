//============================================================================
// Name        : Circulo.h
// Author      : Joaquin Gonzalez
// Version     : 1
// Copyright   : --
// Description : Clases, polimorfismo, herencia C++, Ansi-style
//============================================================================

#ifndef CIRCULO_H_
#define CIRCULO_H_

#include "FigurasGeometricas.h"

class Circulo:public FigurasGeometricas {

	private:

		Punto *p;
		float radio;

	public:

		Circulo(Punto *, float);
		virtual ~Circulo();
		void mostrarDatos();
		void TrasladarEjeX(float);
		void TrasladarEjeY(float);

};

#endif /* CIRCULO_H_ */
