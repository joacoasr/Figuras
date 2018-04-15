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

		float X, Y, Radio;

	public:



		//Punto(float,float,float);
		virtual ~Punto();
		void setPuntoX(float );
		void setPuntoY(float );
		void setRadio(float);
		float getPuntoX();
		float getPuntoY();
		float getRadio();

};

#endif /* PUNTO_H_ */
