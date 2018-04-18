//============================================================================
// Name        : Menu.cpp
// Author      : Joaquin Gonzalez
// Version     : 1
// Copyright   : --
// Description : Clases, polimorfismo, herencia C++, Ansi-style
//============================================================================

#include "../Include/Menu.h"

#include <iostream>

using namespace std;

Menu::Menu() {

}

Menu::~Menu() {

}


void Menu::OpcionesMenu(){

	int control = -1,Mx = 0;

	Nodo *Lista = NULL;
	Nodo *Final = NULL;
	Nodo *Frente = NULL;

	ControlDeFiguras CdF;
	CdF.setMaximo(Mx);

	while ( control != 0 ){



		cout << "\nOpciones:" << endl
			 <<	"0) Salir del programa. " << endl
			 << "1) Insertar figura en la lista(push-FIFO). " << endl
			 << "2) Mostrar figuras. " << endl
		     << "3) Trasladar los ejes de una figura (ver lista y utilizar el id de la figura). " << endl
		     << "4) Cambiar figura de lugar (ver lista y utilizar el id de la figura). " << endl
		     << "5) Eliminar figura segun id." << endl
			 << "6) Eliminar figura(pop-FIFO)." << endl
			 << "7) Cuantas figuras hay en total." << endl
			 << "\nIngrese la opcion:";
			 cin >> control;
			//cout << "\n";

		switch (control){

			case 0:

				cout << "\n----Gracias por usar el programa, bye!!!----" << endl;
				break;

			case 1:{

				CdF.setMaximo(CdF.InsertarFiguraEnLaLista(Frente,Final,Lista,CdF.getMaximo(),CdF));
				break;
			}
			case 2:{

				CdF.MostrarLista(Frente,Lista);
				break;
			}

			case 3:{

				CdF.Trasladar_ejes_figuras(Frente,Lista,CdF.getMaximo());
				break;
			}

			case 4:{

				CdF.CambiarDePosicionFigura(Frente,Final,Lista,CdF.getMaximo());
				break;
			}
			case 5:{

				CdF.setMaximo(CdF.EliminarCualquierFigura(Frente,Final,Lista,CdF.getMaximo()));
				break;
			}
			case 6:{

				CdF.setMaximo(CdF.EliminarFiguraDeLaLista(Frente,Final,Lista,CdF.getMaximo()));
				break;
			}

			case 7:{

				if( CdF.getMaximo() == 0 ){

					cout << "\n-----Lista vacia-----" << endl;

				}else{

					cout << "\nHay " <<  CdF.getMaximo() << " figura/s. " <<  endl;

				}
				break;
			}

			default:

				cout << "Opcion no valida, intentalo de nuevo xD" << endl;

		}

	}
};
