//============================================================================
// Name        : Constantes.cpp
// Author      : P035
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "LaClase.h"
using namespace std;

int main() {
	/*
	 * La palabra reservada const declara que un objeto o una variable
	 * como inmutable, esto hace que no se pueda cambiar ningun atributo si es un objeto. Ademas
	 * para que un objeto const use una función esta tiene que ser declarada como const.
	 */
	cout << "!!!Constantes!!!" << endl; // prints !!!Constantes!!!
	//Si uno declara un objeto como const y luego intentas cambiar el valor de un atributo esto dara un error de compilación.
	LaClase P035("P035", 7854, "Familia Vargas Barrera", "Cocinar");
	P035.Presentarse();
	return 0;
}
