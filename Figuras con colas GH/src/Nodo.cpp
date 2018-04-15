//============================================================================
// Name        : Nodos.cpp
// Author      : Joaquin Gonzalez
// Version     : 1
// Copyright   : --
// Description : Clases, polimorfismo, herencia C++, Ansi-style
//============================================================================


#include "../Include/Nodo.h"

#include <iostream>

#include "../Include/ControlDeFiguras.h"

using namespace std;

/*Nodo::Nodo() {

};*/
void Nodo::setid(int ident){

	this -> id = ident;

};
void Nodo::setFigurasGeometricas(FigurasGeometricas *FG){

	this -> FiGe = FG;

};
void Nodo::setNodo(Nodo *ptrsig){

	this -> PtrSiguiente = ptrsig;

};
int Nodo::getid(){

	return(this->id);
}

FigurasGeometricas *Nodo::getFigGeo(){

	return(this->FiGe);

};
Nodo *Nodo::getNodo(){

	return(this->PtrSiguiente);

};

Nodo::~Nodo() {

}

void Nodo::Lista_Push(Nodo *&Frente, Nodo *&Final, FigurasGeometricas *FigGeo, int M){

	 Nodo *NuevoNodo = new Nodo();          //Creacion nuevo nodo
	 NuevoNodo -> FiGe = FigGeo;			//Creacion nuevo nodo
	 NuevoNodo -> PtrSiguiente = NULL;		//Creacion nuevo nodo
	 NuevoNodo -> id = M;

	 if( ListaVacia(Frente) ){

		 Frente = NuevoNodo;

	 }else{

		 Final -> PtrSiguiente = NuevoNodo;

	 }

	 Final = NuevoNodo;
	 cout << "Figura correctamente incertada." << endl ;

};

bool Nodo::ListaVacia(Nodo *Frente){

	if( Frente == NULL ){

		return true;

	}else{

		return false;

	}
};

void Nodo::Lista_Pop(Nodo *&Frente, Nodo *&Final){

	Nodo *aux = Frente;
	Nodo *actual = new Nodo();
	actual = Frente;
	int idaux;

	if( ListaVacia(Frente) ){

		cout << "\n-----Lista vacia.-----" << endl;

	}else{

		while ( actual -> PtrSiguiente != NULL ){

			actual = actual -> PtrSiguiente;
			idaux = ( actual -> getid() ) - 1;
			actual -> setid(idaux);
		}

		if ( Frente == Final ){

			Frente = NULL;
			Final = NULL;

		}else{

			Frente = Frente -> PtrSiguiente;

		}

		delete (aux);
		cout << "\nFigura eliminada correctamente." << endl;
	}
};

void Nodo::mostrar_lista(Nodo *Frente){

	Nodo *actual = new Nodo();
	actual = Frente;

	if( ListaVacia(Frente) ){

		cout << "\n-----Lista vacia.-----" << endl;

	}else{

		cout <<"\n-----Lista:-----" << endl;

		while ( actual != NULL ){

			cout << "\nid Figura: " << actual -> id << endl;
			actual -> FiGe-> mostrarDatos();
			actual = actual -> PtrSiguiente;
			cout <<"\n----------------" << endl;
		}
	}
};

void Nodo::EliminarFiguraSegunId(Nodo *&Frente, int eliminar, int M){

	Nodo *actual = new Nodo();
	Nodo *anterior = new Nodo();
	Nodo *aux_cambioId = new Nodo();
	int idaux;

	actual = Frente;

	if( ListaVacia(Frente) ){

		cout << "\n-----Lista vacia.-----" << endl;

	}else{

		if( eliminar > 0 ){

			while( ( actual != NULL ) && ( actual -> id != eliminar ) ){

				anterior = actual;
				actual = actual -> PtrSiguiente;
				aux_cambioId->PtrSiguiente = actual;
			}

			anterior -> PtrSiguiente = actual -> PtrSiguiente;

		}

		if( actual -> getid() < M){

			aux_cambioId = actual->PtrSiguiente;

			while( aux_cambioId != NULL ){

				idaux = ( aux_cambioId -> getid() )-1;
				aux_cambioId -> setid(idaux);
				aux_cambioId = aux_cambioId -> PtrSiguiente;

			}
		}

		if( eliminar == 0 ){

			Frente = Frente -> PtrSiguiente;

		}

		delete (actual);
		cout << "\nFigura eliminada correctamente." << endl;
	}
};

