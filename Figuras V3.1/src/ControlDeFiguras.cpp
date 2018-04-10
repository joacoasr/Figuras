//============================================================================
// Name        : ControlDeFiguras.cpp
// Author      : Joaquin Gonzalez
// Version     : 3.1
// Copyright   : --
// Description : Clases, polimorfismo, herencia C++, Ansi-style
//============================================================================

#include "../include/ControlDeFiguras.h"

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

void ControlDeFiguras::Trasladar_ejes_figuras(FigurasGeometricas *FiGe[], int n){

	int caso = 1, ValorTras = 1;
	float ValorTraslacionX,ValorTraslacionY;

	while( ( ValorTras > 0 ) && ( ValorTras <= n )){

		cout << "\nCon que figura dentro del vector desea interactuar?: ";
		cin >> ValorTras;

		if( ( ValorTras > 0 ) && ( ValorTras <= n ) ){

			while (( caso > 0 ) && (caso < 4)){

				cout << "\nOpciones:\n" << endl
					 << "1) Trasladar en el eje X\n" << endl
					 << "2) Trasladar en el eje Y\n" << endl
					 << "3) Trasladar en el eje X e Y" << endl
					 << "\nOpcion: ";
				cin >> caso;

				if ( ( caso > 0 ) && ( caso < 4 )){

					for( int i = 0 ; i <  n  ; i++){

						if( i == ( ValorTras - 1 ) ){

							switch (caso){

								case 1:

									cout << "\nEn que valor desea trasladar al eje X:";
									cin >> ValorTraslacionX;

									FiGe[i] -> TrasladarEjeX(ValorTraslacionX);

									break;

								case 2:

									cout << "\nEn que valor desea trasladar al eje Y:";
									cin >> ValorTraslacionY;

									FiGe[i] -> TrasladarEjeY(ValorTraslacionY);

									break;

								case 3:

									cout << "\nEn que valor desea trasladar al eje X:";
									cin >> ValorTraslacionX;
									FiGe[i] -> TrasladarEjeX(ValorTraslacionX);

									cout << "\nEn que valor desea trasladar al eje Y:";
									cin >> ValorTraslacionY;
									FiGe[i] -> TrasladarEjeY(ValorTraslacionY);

									break;

								default:

									cout << "Opcion Incorrecta, intentalo de nuevo xD" <<endl;

							}
						}
					}
					caso = -1;
					ValorTras = 0;

				}else if ( ( caso < 1 ) || ( caso > 3 )){

					cout << "Opcion no valida." << endl;
					caso = 1;

				}
			}
		}else{

			cout << "\nValor no valido, hay figuras desde la posicion 1 a la " << n << endl;
			ValorTras = 1;

		}
	}
};

void ControlDeFiguras::mostrar_datos_de_figuras(FigurasGeometricas *FiGe[], int n){

	int i;

	for( i = 0 ; i < n ; i++ ){

		cout <<"\nFigura número: " << (i+1) << endl;;
		FiGe[i] -> mostrarDatos();

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

					cout <<"No se seleccionó ninguna opción, intentalo de nuevo xD\n";

			}
			caso = -1;

		}else{

			cout << "Opcion incorrecta.\n" << endl;
			caso = 1;

		}
	}
	return FG;
};


void ControlDeFiguras::SwapFiguras(FigurasGeometricas *FiGe[], int n){

	int ValorInicio = 1, ValorCambio = 1;
	FigurasGeometricas *aux = NULL;

	if( n > 1 ){

		while( ( ValorInicio > 0 ) && ( ValorCambio > 0 ) && ( ValorInicio <= n ) && ( ValorCambio <= n ) ){

			cout << "\nPosicion primera figura: ";
			cin >> ValorInicio;
			cout << "\nPosicion segunda figura: ";
			cin >> ValorCambio;


			if( ( ValorInicio > 0 ) && ( ValorCambio > 0 ) && ( ValorInicio <= n ) && ( ValorCambio <= n ) ){

				for ( int i = 0 ; i < n ; i++ ){

					if( i == ( ValorInicio - 1 ) ){

						aux = FiGe[i];
						FiGe[i] = FiGe[ ValorCambio - 1 ];
						FiGe[ ValorCambio - 1 ] = aux;
						aux = NULL;

					}

				}
				ValorInicio = -1;
				ValorCambio = -1;

			}else{

				cout << "\nValores no validos, hay figuras desde la posicion 1 a la " << n << endl;

				ValorInicio = 1;
				ValorCambio = 1;
			}
		}

	}else{

		cout << "\nSolo hay una figura" << endl;

	}
};

void ControlDeFiguras::MoverFiguraDePosicion(FigurasGeometricas *FiGe[], int n){

	int i,j, ValorInicial = 1, ValorFinal = 1;
	FigurasGeometricas *aux;

	if( n > 1 ){

		while( ( ValorInicial > 0 ) && ( ValorFinal > 0 )&&( ValorInicial <= n )&&( ValorFinal <= n ) ){

			cout << "\nQue elemento desea mover de posicion: ";
			cin >> ValorInicial;
			cout << "\nEn que posicion: ";
			cin >> ValorFinal;

			if( ( ValorInicial > 0 ) && ( ValorFinal > 0 ) && ( ValorInicial <= n ) && ( ValorFinal <= n ) ){

				for( i = 0 ; i < n ; i++ ){

					if ( i == ( ValorFinal - 1 ) ){

						aux = FiGe[i];
						FiGe[i] = FiGe[ValorInicial - 1];

						for( j = ( ValorInicial - 1 ) ; j > ValorFinal ; j-- ){

							FiGe[j] = FiGe[j - 1];

						}

						FiGe[ValorFinal] = aux;

					}
				}
				ValorInicial = -1;
				ValorFinal = -1;

			}else{

				cout << "\nValores no validos, hay figuras desde la posicion 1 a la " << n << endl;

				ValorInicial = 1;
				ValorFinal = 1;
			}
		}

	}else{

		cout << "\nSolo hay una figura" << endl;

	}
};

int ControlDeFiguras::EliminarFigura(FigurasGeometricas *FiGe[], int n){

	int i, j, PosEliminar = 1;
	FigurasGeometricas * aux;

	if( n > 1){

		while( ( PosEliminar > 0 ) && (PosEliminar <= n) ){

			cout << "Que posicion desea eliminar?:";
			cin  >> PosEliminar;
			cout << endl;

			if(( PosEliminar > 0 ) && (PosEliminar <= n) ){

				for( i = 0 ; i < n ; i++){

					if( i == (PosEliminar - 1) ){

						aux = FiGe[i];
						delete aux;
						FiGe[i] = NULL;

						for( j = i ; j < n ; j++ ){

							if( j < (n - 1)){

								FiGe[j] = FiGe[j + 1];

							}else if( j == (n - 1)){

								FiGe[j] = NULL;

							}
						}
					}
				}

			PosEliminar = 0;

			}else{

				cout << "Valor no valido, hay figuras desde la posicion 1 a la " << n << endl;

				PosEliminar = 1;

			}
		}

	}else{

		delete(FiGe[0]);

	}
	return(n-1);
}


