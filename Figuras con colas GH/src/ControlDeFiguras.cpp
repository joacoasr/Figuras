//============================================================================
// Name        : ControlDeFiguras.cpp
// Author      : Joaquin Gonzalez
// Version     : 1
// Copyright   : --
// Description : Clases, polimorfismo, herencia C++, Ansi-style
//============================================================================

#include "../Include/ControlDeFiguras.h"

#include <iostream>

using namespace std;

/*ControlDeFiguras::ControlDeFiguras() {

};*/

ControlDeFiguras::~ControlDeFiguras() {

};

void ControlDeFiguras::setMaximo(int Max){

	this -> Maximo = Max;

};

int ControlDeFiguras::getMaximo(){

	return(Maximo);

};

void ControlDeFiguras::Trasladar_ejes_figuras(Nodo *Frente,Nodo *L, int MAX){

	int caso = 1, VTid = 0;
	float ValorTraslacionX,ValorTraslacionY;
	Nodo *actual = new Nodo();
	actual = Frente;

	cout << "\n----Prueba error 1---- " << L -> ListaVacia (Frente) << endl;

	while( ( VTid >= 0 ) && ( VTid <= MAX )){

		cout << "\n----Prueba error 2---- " << L -> ListaVacia (Frente) << endl;

		if( L -> ListaVacia (Frente) ){

			cout << "\n----Prueba error 3---- " << L -> ListaVacia (Frente) << endl;
			cout << "\n-----Lista vacia-----" << endl;
			VTid = -1;

		}else{

			cout << "\n----Prueba error 4---- " << L -> ListaVacia (Frente) << endl;
			cout << "\nCon que figura dentro del vector desea interactuar?: ";
			cin >> VTid;

			if( ( VTid >= 0 ) && ( VTid < MAX ) ){

				while (( caso > 0 ) && (caso < 4)){

					cout << "\nOpciones:\n" << endl
						 << "1) Trasladar en el eje X\n" << endl
						 << "2) Trasladar en el eje Y\n" << endl
						 << "3) Trasladar en el eje X e Y" << endl
						 << "\nOpcion: ";
					cin >> caso;

					if ( ( caso > 0 ) && ( caso < 4 )){

						while( actual != NULL ){

							if( actual->getid() == VTid ){

								switch (caso){

									case 1:

										cout << "\nEn que valor desea trasladar al eje X:";
										cin >> ValorTraslacionX;

										actual -> getFigGeo() -> TrasladarEjeX(ValorTraslacionX);

										break;

									case 2:

										cout << "\nEn que valor desea trasladar al eje Y:";
										cin >> ValorTraslacionY;

										actual -> getFigGeo() -> TrasladarEjeY(ValorTraslacionY);

										break;

									case 3:

										cout << "\nEn que valor desea trasladar al eje X:";
										cin >> ValorTraslacionX;
										actual -> getFigGeo() -> TrasladarEjeX(ValorTraslacionX);

										cout << "\nEn que valor desea trasladar al eje Y:";
										cin >> ValorTraslacionY;
										actual -> getFigGeo() -> TrasladarEjeY(ValorTraslacionY);

									break;

									default:

										cout << "Opcion Incorrecta, intentalo de nuevo xD" <<endl;

								}
							}
							actual = actual -> getNodo();
						}

						caso = -1;
						VTid = -1;

					}else if ( ( caso < 1 ) || ( caso > 3 )){

							  cout << "Opcion no valida." << endl;
							  caso = 1;

					}
				}
			}else{

				cout << "\nNo hay Figuras con ese id." << endl;
				VTid = 0;

			}
		}
	}
};


FigurasGeometricas * ControlDeFiguras::Crear_Figuras_Geometricas(){

	int caso = 1;

	FigurasGeometricas *FG;

	while( ( caso > 0 ) && ( caso < 4 ) ){

		cout << "Elija que figura geometrica crear:\n " << endl
			 << "1) Rectangulo.\n" << endl
			 << "2) Triangulo.\n" << endl
			 << "3) Circulo." <<endl
			 << "\nOpcion:";
		cin >> caso;
		cout << endl;

		if( ( caso > 0 ) && ( caso < 4 ) ){

			switch (caso){

				case 1:{

					RectanguloFactory RF;

					FG = RF . CrearFigura();

					break;
				}
				case 2:{

					TrianguloFactory TF;

					FG = TF . CrearFigura();

					break;
				}
				case 3:{

					CirculoFactory CF;

					FG = CF . CrearFigura();

					break;
				}
				default:

					cout <<"No se seleccion� ninguna opci�n, intentalo de nuevo xD\n";

			}
			caso = -1;

		}else{

			cout << "Opcion incorrecta.\n" << endl;
			caso = 1;

		}
	}
	return FG;
};



int ControlDeFiguras::InsertarFiguraEnLaLista(Nodo *&Frente, Nodo *&Final,Nodo *L, int M, ControlDeFiguras CdF){

	FigurasGeometricas *FigGeo;

	FigGeo = CdF.Crear_Figuras_Geometricas();
	L -> Lista_Push(Frente,Final,FigGeo,M);
	M++;
	return M;

};



int ControlDeFiguras::EliminarFiguraDeLaLista(Nodo *&Frente, Nodo *&Final, Nodo *L, int M){

	L -> Lista_Pop(Frente,Final);
	if( M > 0 ){

		M--;

	}
	return M;
};

void ControlDeFiguras::MostrarLista(Nodo *Frente, Nodo *L){

	L -> mostrar_lista(Frente);

};

int ControlDeFiguras::EliminarCualquierFigura(Nodo *&Frente, Nodo *L, int M){

	int eliminar, control = -1;

	while ( control != 0 ){

		if( !L->ListaVacia(Frente) ){

			cout << "Que figura desea eliminar? (Utilizar el id de la figura):";
			cin >> eliminar;

			if( ( eliminar >= 0 ) && ( eliminar < M ) ){

				L -> EliminarFiguraSegunId(Frente,eliminar,M);

				if( M > 0 ){

					M--;

				}
				control = 0;


			}else{

			cout << "\nNo hay figuas con ese id." << endl;
			control = -1;

			}

		}else{

			cout << "\n-----Lista Vacia-----" << endl;
			control = 0;

		}

	}
	return M;


};
