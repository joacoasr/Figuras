//============================================================================
// Name        : Nodos.h
// Author      : Joaquin Gonzalez
// Version     : 1
// Copyright   : --
// Description : Clases, polimorfismo, herencia C++, Ansi-style
//============================================================================


#ifndef NODO_H_
#define NODO_H_

#include "FigurasGeometricas.h"

class Nodo {
private:

	int id;
	FigurasGeometricas *FiGe;
	Nodo *PtrSiguiente;

public:

	//Nodo();
	virtual ~Nodo();
	int getid();
	Nodo *getNodo();
	FigurasGeometricas *getFigGeo();
	void setid(int);
	void setNodo(Nodo *);
	void setFigurasGeometricas(FigurasGeometricas *);
	void Lista_Push(Nodo *&, Nodo *&, FigurasGeometricas *,int);
	void Lista_Pop(Nodo *&, Nodo *&);
	void mostrar_lista(Nodo *);
	void EliminarFiguraSegunId(Nodo *&, int, int);
	bool ListaVacia(Nodo *);
	void CambiarFiguraDePosicion(Nodo *, int, int);

};

#endif /* NODO_H_ */
