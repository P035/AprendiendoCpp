//============================================================================
// Name        : Destructor.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "LaClase.h"
using namespace std;

int main() {
	/*
	 * Este programa creara un objeto de la clase pastelero
	 * este tendra un constructor que describira la cualidades
	 * del objetos actual, ademas tendra dos métodos que
	 * haran al pastelero cocinar.
	 */
	cout << "!Creando un pastelero!" << endl; // prints !Creando un pastelero!
	LaClase Pastelero("Pinti", "Pie de limon", 5);
	LaClase *pPastelero = &Pastelero;
	pPastelero->CocinarRecetaEspecial();
	return 0;
}
