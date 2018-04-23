//============================================================================
// Name        : FigureFactory.h
// Author      : Joaquin Gonzalez
// Version     : 1
// Copyright   : --
// Description : Clases, polimorfismo, herencia C++, Ansi-style
//============================================================================

#ifndef FIGUREFACTORY_H_
#define FIGUREFACTORY_H_

#include "FigurasGeometricas.h"

class FigureFactory {

	private:

	public:

		//FigureFactory();
		virtual ~FigureFactory();
		virtual FigurasGeometricas *CrearFigura() = 0;
		virtual void MostrarFiguraACrear() = 0;
};

#endif /* FIGUREFACTORY_H_ */
