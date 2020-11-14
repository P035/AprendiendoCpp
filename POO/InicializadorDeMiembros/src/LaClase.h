/*
 * LaClase.h
 *
 *  Created on: Oct 25, 2020
 *      Author: p035
 */

#ifndef LACLASE_H_
#define LACLASE_H_
#include <string>
using namespace std;

class LaClase {
public:
	LaClase(string n, int e, string p);

private:
	/*
	 * Declaramos padres como const y con una lista de inicializadores de miembros
	 * lograremos asignar un valor a padres despues de que se haya declarado.
	*/
	string nombre;
	int edad;
	const string padres;
};

#endif /* LACLASE_H_ */
