//============================================================================
// Name        : Punto.h
// Author      : Joaquin Gonzalez
// Version     : 3.1
// Copyright   : --
// Description : Clases, polimorfismo, herencia C++, Ansi-style
//============================================================================

#ifndef PUNTO_H_
#define PUNTO_H_

//Se puede hacer que las coordenadas sean privadas y utilizar setter y getters.

class Punto {

	private:

	public:

		float X, Y, Radio;

		Punto(float,float,float);
		virtual ~Punto();

};

#endif /* PUNTO_H_ */
