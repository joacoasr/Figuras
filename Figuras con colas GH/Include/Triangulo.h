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

		Punto *VecPuntos[3];

	public:

		Triangulo(Punto *_VecPuntos[]);
		virtual ~Triangulo();
		void mostrarDatos();
		void TrasladarEjeX(float);
		void TrasladarEjeY(float);

};

#endif /* TRIANGULO_H_ */
