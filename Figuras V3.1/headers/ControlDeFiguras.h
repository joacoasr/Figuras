//============================================================================
// Name        : ControlDeFiguras.h
// Author      : Joaquin Gonzalez
// Version     : 3.1
// Copyright   : --
// Description : Clases, polimorfismo, herencia C++, Ansi-style
//============================================================================

#ifndef CONTROLDEFIGURAS_H_
#define CONTROLDEFIGURAS_H_

#include "FigurasGeometricas.h"
#include "Punto.h"
#include "Triangulo.h"
#include "FigureFactory.h"
#include "CirculoFactory.h"
#include "RectanguloFactory.h"
#include "Rectangulo.h"
#include "Circulo.h"
#include "FigurasGeometricas.h"
#include "TrianguloFactory.h"

class ControlDeFiguras {

	private:

		int Maximo;

	public:

		//ControlDeFiguras();
		void setMaximo(int);
		int getMaximo();
		virtual ~ControlDeFiguras();
		FigurasGeometricas *Crear_Figuras_Geometricas();
		void mostrar_datos_de_figuras(FigurasGeometricas *FiGe[],int n);
		void Trasladar_ejes_figuras(FigurasGeometricas *FiGe[], int n);
		void SwapFiguras(FigurasGeometricas *FiGe[], int n);
		void MoverFiguraDePosicion(FigurasGeometricas *FiGe[], int n);
		int EliminarFigura(FigurasGeometricas *FiGe[], int n);

};

#endif /* CONTROLDEFIGURAS_H_ */
