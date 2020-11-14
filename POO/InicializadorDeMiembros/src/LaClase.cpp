/*
 * LaClase.cpp
 *
 *  Created on: Oct 25, 2020
 *      Author: p035
 */

#include "LaClase.h"
#include <iostream>
using namespace std;
/*
 * Para declarar una lista de inicializadores de miembros
 * uno los declara junto al constructor.
 * Primero en una nueva linea, pero antes del corchete se pone :
 * seguido del nombre de los miembros que se les asignara el valor,
 * finalmente despues del nombre se ponen () y dentro de ellos se pone el
 * valor o variable que se le asignara al miembro.
 */
LaClase::LaClase(string n, int e, string p)
: nombre(n), edad(e), padres(p)
{
	// TODO Auto-generated constructor stub
	cout << "El nombre del objeto es: " << nombre << ", la edad del objeto es: " << e << " y el/la padre/madre del objeto es: " << p << endl;
}

