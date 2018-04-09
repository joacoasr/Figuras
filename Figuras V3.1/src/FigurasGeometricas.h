//============================================================================
// Name        : FigurasGeometricas.h
// Author      : Joaquin Gonzalez
// Version     : 3.1
// Copyright   : --
// Description : Clases, polimorfismo, herencia C++, Ansi-style
//============================================================================

#ifndef FIGURASGEOMETRICAS_H_
#define FIGURASGEOMETRICAS_H_

class FigurasGeometricas {

	private:

	public:

		//FigurasGeometricas();
		virtual ~FigurasGeometricas();
		virtual void mostrarDatos() = 0;
		virtual void TrasladarEjeX(float) = 0;
		virtual void TrasladarEjeY(float) = 0;

};

#endif /* FIGURASGEOMETRICAS_H_ */
