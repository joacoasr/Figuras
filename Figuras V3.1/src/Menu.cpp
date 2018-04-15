//============================================================================
// Name        : Menu.cpp
// Author      : Joaquin Gonzalez
// Version     : 3.1
// Copyright   : --
// Description : Clases, polimorfismo, herencia C++, Ansi-style
//============================================================================

#include "../include/Menu.h"

#include <iostream>

using namespace std;

Menu::Menu() {

}

Menu::~Menu() {

}


void Menu::OpcionesMenu(){

	int control = -1, i,max;

	cout << "Cuantas figuras desea Crear?:";
	cin >> max;

	ControlDeFiguras CdF;
	CdF.setMaximo(max);

	FigurasGeometricas *FigGeo[CdF.getMaximo()];

	for( i = 0 ; i < CdF.getMaximo() ; i++ ){

		FigGeo[i] = CdF . Crear_Figuras_Geometricas();

	}

	while ( control != 0 ){

		if( CdF.getMaximo() == 0 ){

			cout << "\n-----No hay figuras dentro del vector-----" << endl
				 << "-------Gracias por usar el programa-------  "<< endl;

			control = 0;

		}else{

			cout << "\nOpciones:" << endl
				 <<	"0) Salir del programa. " << endl
				 << "1) Trasladar ejes. " << endl
				 << "2) Mostrar figuras. " << endl
				 << "3) Intercambiar figuras dentro del vector. " << endl
				 << "4) Cambia posicion de figura dentro del vector." << endl
				 << "5) Eliminar figura." << endl
				 << "6) Cuantas figuras hay en total." << endl
				 << "\nIngrese la opcion:";
			cin >> control;
			//cout << "\n";

			switch (control){

				case 0:

					cout << "\nGracias por usar el programa, bye!!!" << endl;
					break;

				case 1:

					CdF . Trasladar_ejes_figuras(FigGeo,CdF.getMaximo());
					break;

				case 2:

					CdF . mostrar_datos_de_figuras(FigGeo,CdF.getMaximo());
					break;

				case 3:

					CdF . SwapFiguras(FigGeo,CdF.getMaximo());
					break;


				case 4:

					CdF . MoverFiguraDePosicion(FigGeo,CdF.getMaximo());
					break;

				case 5:

					CdF . setMaximo( CdF.EliminarFigura( FigGeo, CdF.getMaximo() ) );
					break;

				case 6:

					cout << "Hay " <<  CdF.getMaximo() << " figura/s. " <<  endl;
					break;

				default:

					cout << "Opcion no valida, intentalo de nuevo xD" << endl;

			}
		}
	}
};
