//============================================================================
// Name        : Punto.h
// Author      : Joaquin Gonzalez
// Version     : 1
// Copyright   : --
// Description : Clases, polimorfismo, herencia C++, Ansi-style
//============================================================================

#ifndef PUNTO_H_
#define PUNTO_H_

class Punto {

	private:

		float X, Y, Radio;

	public:

		virtual ~Punto();
		float getPuntoX();
		float getPuntoY();
		float getRadio();
		void setPuntoX(float);
		void setPuntoY(float);
		void setRadio(float);

};

#endif /* PUNTO_H_ */
