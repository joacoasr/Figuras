//============================================================================
// Name        : RectanguloFactory.h
// Author      : Joaquin Gonzalez
// Version     : 1
// Copyright   : --
// Description : Clases, polimorfismo, herencia C++, Ansi-style
//============================================================================

#ifndef RECTANGULOFACTORY_H_
#define RECTANGULOFACTORY_H_

#include "FigureFactory.h"
#include "Punto.h"
#include "FigurasGeometricas.h"
#include "Rectangulo.h"

class RectanguloFactory:public FigureFactory {

	private:

	public:

		//RectanguloFactory();
		virtual ~RectanguloFactory();
		FigurasGeometricas *CrearFigura();
};

#endif /* RECTANGULOFACTORY_H_ */
