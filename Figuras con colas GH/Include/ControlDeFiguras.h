//============================================================================
// Name        : ControlDeFiguras.h
// Author      : Joaquin Gonzalez
// Version     : 1
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
#include "Nodo.h"

class ControlDeFiguras {

	private:

		int Maximo;

	public:

		//ControlDeFiguras();
		void setMaximo(int);
		int getMaximo();
		virtual ~ControlDeFiguras();
		FigurasGeometricas *Crear_Figuras_Geometricas();
		void Trasladar_ejes_figuras(Nodo *,Nodo *,int);
		int EliminarCualquierFigura(Nodo *&, Nodo *, int );
		int InsertarFiguraEnLaLista(Nodo *&, Nodo *&,Nodo *,int ,ControlDeFiguras);
		int EliminarFiguraDeLaLista(Nodo *&, Nodo *&, Nodo *,int );
		void MostrarLista(Nodo *,Nodo *);

};

#endif /* CONTROLDEFIGURAS_H_ */
