//============================================================================
// Name        : TrianguloFactory.h
// Author      : Joaquin Gonzalez
// Version     : 1
// Copyright   : --
// Description : Clases, polimorfismo, herencia C++, Ansi-style
//============================================================================

#ifndef TRIANGULOFACTORY_H_
#define TRIANGULOFACTORY_H_

#include "FigureFactory.h"
#include "Punto.h"
#include "FigurasGeometricas.h"
#include "Triangulo.h"

class TrianguloFactory:public FigureFactory {

	private:

	public:

		//TrianguloFactory();
		virtual ~TrianguloFactory();
		FigurasGeometricas *CrearFigura();

};

#endif /* TRIANGULOFACTORY_H_ */
