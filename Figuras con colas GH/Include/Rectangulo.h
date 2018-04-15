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

		float Xp1, Yp1, Xp2, Yp2, Xp3, Yp3, Xp4, Yp4;

	public:

		Rectangulo(float, float, float, float, float, float, float, float);
		virtual ~Rectangulo();
		void mostrarDatos();
		void TrasladarEjeX(float);
		void TrasladarEjeY(float);


};

#endif /* RECTANGULO_H_ */
