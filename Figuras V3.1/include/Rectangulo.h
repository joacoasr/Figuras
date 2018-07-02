//============================================================================
// Name        : Rectangulo.h
// Author      : Joaquin Gonzalez
// Version     : 3.1
// Copyright   : --
// Description : Clases, polimorfismo, herencia C++, Ansi-style
//============================================================================

#ifndef RECTANGULO_H_
#define RECTANGULO_H_

#include "FigurasGeometricas.h"

class Rectangulo:public FigurasGeometricas{

	private:

		Punto *VecPuntos[4];

	public:

		Rectangulo(Punto *VectP[]);
		virtual ~Rectangulo();
		void mostrarDatos();
		void TrasladarEjeX(float);
		void TrasladarEjeY(float);


};

#endif /* RECTANGULO_H_ */
